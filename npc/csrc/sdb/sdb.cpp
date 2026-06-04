#include "../include/sdb.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>

NPCState npc_state = { .state = NPC_STOP, .nr_inst = 0 };

static bool is_batch_mode = false;

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

// ==================== 命令处理函数 ====================

static int cmd_c(char *args) {
  sim_exec(-1);
  return 0;
}

static int cmd_si(char *args) {
  uint64_t n = 1;
  if (args != NULL) {
    n = atoi(args);
  }
  if (n <= 0) {
    printf("Invalid step count: %s\n", args);
    return 0;
  }
  sim_exec(n);
  return 0;
}

static int cmd_q(char *args) {
  npc_state.state = NPC_QUIT;
  return -1;
}

static int cmd_info(char *args) {
  if (args == NULL || strcmp(args, "r") == 0) {
    sim_print_regs();
  } else {
    printf("Unknown info subcommand: %s\n", args);
  }
  return 0;
}

static int cmd_help(char *args);

// ==================== 命令表 ====================

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c",    "Continue the execution of the program",             cmd_c },
  { "q",    "Exit NEMU",                                        cmd_q },
  { "si",   "Execute N instructions (default 1): si [N]",       cmd_si },
  { "info", "Print register status: info r",                    cmd_info },
};

#define NR_CMD (sizeof(cmd_table) / sizeof(cmd_table[0]))

static int cmd_help(char *args) {
  printf("Usage:\n");
  for (int i = 0; i < (int)NR_CMD; i++) {
    printf("  %-5s - %s\n", cmd_table[i].name, cmd_table[i].description);
  }
  return 0;
}

// ==================== 读取输入行 ====================

static char *rl_gets() {
  static char *line_read = NULL;
  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

// ==================== sdb主循环 ====================

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *end = str + strlen(str);
    // 去除末尾空白
    while (end > str && (*(end - 1) == ' ' || *(end - 1) == '\t' || *(end - 1) == '\n')) {
      end--;
    }
    *end = '\0';

    if (str[0] == '\0') continue;

    // 分割命令和参数
    char *cmd = strtok(str, " ");
    char *args = cmd ? cmd + strlen(cmd) + 1 : NULL;
    if (args >= end) args = NULL;

    // 查找并执行命令
    int i;
    for (i = 0; i < (int)NR_CMD; i++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) return;
        break;
      }
    }
    if (i == (int)NR_CMD) {
      printf("Unknown command '%s'. Type 'help' for usage.\n", cmd);
    }
  }
}
