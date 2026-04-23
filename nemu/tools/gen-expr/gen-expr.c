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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

//randomely select a number between 0 and n
static int choose(int n) {
  //to avoid the bias caused by the remainder operation, we use a loop to discard the random numbers that are greater than or equal to the largest multiple of n that is less than or equal to RAND_MAX.
  int limit = RAND_MAX - RAND_MAX % n;
  int result;
  do {
    result = rand();
  } while (result >= limit);
  return result % n;
}

//randomly generate an expression and store it in buf, the result of the expression is stored in code_buf

static void gen_rand_expr() {
  int op = choose(3);
  if(strlen(buf) > 50) {
    op = 0; // generate a number when the expression is too long
  }
  switch(op) {
    case 0: {
      //generate a number
      int num = rand() % 100;
      char num_str[16];
      sprintf(num_str, "%d", num);
      strcat(buf, num_str);
      break;
    }
    case 1: {
      //generate an expression with parentheses
      strcat(buf, "(");
      gen_rand_expr();
      strcat(buf, ")");
      break;
    }
    case 2: {
      //generate an expression with an operator
      gen_rand_expr();
      char op_str[4];
      int op_type = choose(4);
      switch(op_type) {
        case 0: sprintf(op_str, " + "); break;
        case 1: sprintf(op_str, " - "); break;
        case 2: sprintf(op_str, " * "); break;
        case 3: sprintf(op_str, " / "); break;
      }
      strcat(buf, op_str);
      //a simple way
      if(op_type == 3) {
        //to avoid division by zero, we generate a number between 1 and 100 for the right operand of the division operator
        int num = rand() % 100 + 1;
        char num_str[16];
        sprintf(num_str, "%d", num);
        strcat(buf, num_str);
      }
      else {
        gen_rand_expr();
      }
      break;
    }
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    memset(buf, 0, sizeof(buf)); // Clear the buffer at the beginning of each loop
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
