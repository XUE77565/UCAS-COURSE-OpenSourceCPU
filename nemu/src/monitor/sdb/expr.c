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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include "expreval.h"

enum {
  TK_NOTYPE = 256, 
  TK_EQ, 
  TK_HEX, 
  TK_DEC, 
  TK_REG,
  TK_NEQ,
  TK_DEREF,
  TK_AND,
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\(", '('},         // left parentheses
  {"\\)", ')'},         // right parentheses
  {"\\*", '*'},         // multiply
  {"/", '/'},            // divide
  {"\\+", '+'},         // plus
  {"-", '-'},            // minus
  {"==", TK_EQ},        // equal
  {"!=", TK_NEQ},    // not equal
  {"0[xX][0-9a-fA-F]+", TK_HEX},  // hexadecimal number
  {"[0-9]+", TK_DEC},             // decimal number
  {"\\$[a-zA-Z]+[0-9]*", TK_REG},        // register
  {"&&", TK_AND}        // logical AND operator
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

//Enlarge the size of tokens to pass the test
static Token tokens[65536] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool check_deref(Token *tokens, int nr_token) {
  if(nr_token >= 2) {
    int last_token_type = tokens[nr_token - 2].type;
    if(last_token_type == TK_NOTYPE || last_token_type == '(' || 
       last_token_type == '+' || last_token_type == '-' ||
       last_token_type == '*' || last_token_type == '/' ||
       last_token_type == TK_EQ || last_token_type == TK_NEQ ||
       last_token_type == TK_AND) {
      return true;
    }
  }
  else if(nr_token == 1) {
    //if the '*' is the first token in the expression, it must be a dereference operator
    return true;
  }
  return false;
}

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        //Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //   i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        //temp test
        if(rules[i].token_type != TK_NOTYPE) {
          if(nr_token >= 65536) {
            printf("Too many tokens, increase the size of tokens array.\n");
            //maybe we can use malloc to distribute the memory for tokens array dynamically
            return false;
          }
          memset(tokens[nr_token].str, 0, sizeof(tokens[nr_token].str));// Clear the string before copying
          strncpy(tokens[nr_token].str, substr_start, substr_len);// Copy the matched substring to the token's str field
          tokens[nr_token].type = rules[i].token_type;
          nr_token++;
          //检查解引用
          if(tokens[nr_token - 1].type == '*' && check_deref(tokens, nr_token) == true) {
            tokens[nr_token - 1].type = TK_DEREF;
          }
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  int p = 0;
  int q = nr_token - 1;
  // printf("Tokens:\n");
  // for (int i = 0; i < nr_token; i++) {
  //   printf("  tokens[%d]: type = %d, str = '%s'\n", i, tokens[i].type, tokens[i].str);
  // }
  // printf("p = %d, q = %d\n", p, q);

  //First check if the parentheses in the expression are valid,
  bool check_parentheses = valid_parentheses(tokens, nr_token); 
  if(!check_parentheses) {
    *success = false;
    printf("Invalid parentheses in expression: %s\n", e);
    return 0;
  }
  //Log("PASSED parentheses check\n");

  word_t result = (uint32_t)expreval(p, q, tokens, success);

  if(*success) {
    return result;
  }
  else {
    printf("Failed to evaluate expression: %s\n", e);
    assert(0);
    return 0;
  }
}
