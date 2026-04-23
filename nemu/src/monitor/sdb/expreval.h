#ifndef __EXPREVAL_H__
#define __EXPREVAL_H__

#include <isa.h>
#include "sdb.h"

int expreval(int p, int q, Token *tokens, bool *success);

bool check_parentheses(int p, int q, Token *tokens);

bool valid_parentheses(Token *tokens, int nr_token);

int find_main_operator(int p, int q, Token *tokens);

#endif
