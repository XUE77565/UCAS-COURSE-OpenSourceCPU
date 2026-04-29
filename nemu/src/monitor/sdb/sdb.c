/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <memory/paddr.h>
#include "sdb.h"

static int is_batch_mode = false;


void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_si(char *args) {
  int n = 1;
  if (args != NULL) {
    n = atoi(args);
  }
  if(n <= 0) {
    printf("Invalid number of steps: %d\n", n);
    return 0;
  }
  cpu_exec(n);
  return 0;
}

static int cmd_info(char *args) {
  if (args == NULL) {
    printf("Usage: info [r|w]\n");
    return 0;
  }

  if (strcmp(args, "r") == 0) {
    isa_reg_display();
  }
  else if (strcmp(args, "w") == 0) {
    extern void wp_display();
    wp_display();
  }
  else {
    printf("Unknown info command '%s'\n", args);
  }
  return 0;
}

static int cmd_x(char *args) {
  printf("args = %s\n", args);
  //The first argument is the number of 4-byte words to be scanned, 
  //and the second argument is the expression to be evaluated.
  char *arg_end = args + strlen(args);
  char *num = strtok(args, " ");
  char *expr = num + strlen(num) + 1;

  if(expr >= arg_end) {
    expr = NULL;
  }

  if (args == NULL || expr == NULL) {
    printf("Usage: x N EXPR\n");
    return 0;
  }

  int n = atoi(num);
  paddr_t addr;
  if (sscanf(expr, FMT_PADDR , &addr) != 1) {
    printf("Invalid address format: %s\n", expr);
    return 0;
  }

  //scan the memory and print the content
  for (int i = 0; i < n; i++) {
    paddr_t current_addr = addr + i * 4;
    word_t data = paddr_read(current_addr, 4);
    printf(FMT_PADDR ": " FMT_WORD "\n", current_addr, data);
  }

  return 0;
}

static int cmd_p(char *args) {
  if (args == NULL) {
    printf("Usage: p EXPR\n");
    return 0;
  }

  bool success = false;
  printf("Evaluating expression: %s\n", args);
  word_t result = expr(args, &success);
  if (success) {
    printf(FMT_WORD "\n", result);
  }
  else {
    printf("Failed to evaluate expression: %s\n", args);
  }
  return 0;
}

static int cmd_w(char *args) {
  if (args == NULL) {
    printf("Usage: w EXPR\n");
    return 0;
  }

  WP *wp = new_wp();
  if(wp == NULL) {
    return 0;
  }
  strncpy(wp->expr, args, sizeof(wp->expr) - 1);
  wp->expr[sizeof(wp->expr) - 1] = '\0'; // Ensure null-termination
  bool success = false;
  wp->old_value = expr(args, &success);
  if(success == false) {
    printf("Failed to evaluate expression: %s\n", args);
    free_wp(wp);
    return 0;
  }
  printf("Set watchpoint %d: %s = " FMT_WORD "\n", wp->NO, wp->expr, wp->old_value);
  return 0;
}

static int cmd_d(char *args) {
  if (args == NULL) {
    printf("Usage: d N\n");
    return 0;
  }

  int num = atoi(args);
  if (delete_wp_by_no(num)) {
    printf("Deleted watchpoint %d\n", num);
  } else {
    printf("No watchpoint number %d\n", num);
  }
  return 0;
}


static int cmd_help(char *args);


static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Si N executes N instructions, default steps = 1", cmd_si },
  { "info", "Print the register status or watchpoint information", cmd_info },
  { "x", "Scan the memory: x N EXPR, evaluate EXPR and scan N words in memory", cmd_x },
  { "p", "Evaluate the expression EXPR and print the result", cmd_p },
  { "w", "Set a watchpoint for an expression EXPR", cmd_w },
  { "d", "Delete the watchpoint with the given number N", cmd_d },

  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    //printf("args = %s\n", args);
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        //printf("FOUND COMMAND\n");
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
