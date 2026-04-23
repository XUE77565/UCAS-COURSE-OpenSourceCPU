#include "expreval.h"
#include "sdb.h"
#include <isa.h>
#include <regex.h>
#include <stdlib.h>

enum {
  TK_NOTYPE = 256, 
  TK_EQ, 
  TK_HEX, 
  TK_DEC, 
  TK_REG,
};

uint32_t expreval(int p, int q, Token *tokens, bool *success) {
    if(p > q) {
        *success = false;
        printf("Bad expression\n");
        return 0;
    }
    else if (p == q){
        //No need to check NOTYPE here, because we do not push the NOTYPE token into tokens array 
        //in make_token function      
        if (tokens[p].type == TK_HEX) {
            *success = true;
            return strtoul(tokens[p].str, NULL, 16);
        }
        else if (tokens[p].type == TK_DEC) {
            *success = true;
            return strtoul(tokens[p].str, NULL, 10);
        }
        //TODO: we can also eval the register value here, but we need to parse the register name first
        else {
            *success = false;
            printf("p == q but encountered a non-numeric token: %d\n", tokens[p].type);
            assert(0);
            return 0;
        }
    }
    //when p and q are a pair of parentheses, we just evaluate the expression inside the parentheses
    else if (check_parentheses(p, q, tokens) == true) {
        return expreval(p + 1, q - 1, tokens, success);
    }
    //divide the expression into two parts by the main operator, and evaluate the two parts recursively
    else {
        uint32_t val1, val2;
        int op = -1;
        op = find_main_operator(p, q, tokens);
        if(op == -1) {
            *success = false;
            printf("No operator found in expression\n");
            assert(0);
            return 0;
        }
        val1 = expreval(p, op - 1, tokens, success);
        val2 = expreval(op + 1, q, tokens, success);

        switch (tokens[op].type) {
            case '+': return val1 + val2;
            case '-': return val1 - val2;
            case '*': return val1 * val2;
            case '/': 
                if(val2 == 0) {
                    *success = false;
                    printf("Division by zero\n");
                    assert(0);
                    return 0;
                }
                return val1 / val2;
            default: 
                *success = false;
                printf("Unknown operator: %d\n", tokens[op].type);
                assert(0);
                return 0;
        }
    }
}

bool check_parentheses(int p, int q, Token *tokens) {
    //use depth to check if the p and q are a pair of parentheses
    if(tokens[p].type != '(' || tokens[q].type != ')') {
        return false;
    }
    int depth = 0;
    for(int i = p + 1; i < q; i++) {
        //if we encounter a '(', we increase the depth, if we encounter a ')', we decrease the depth
        if(tokens[i].type == '(') {
            depth++;
        }
        else if(tokens[i].type == ')') {
            if(depth == 0) {
                return false;
            }
            depth--;
        }
    }
    return depth == 0;
}

int find_main_operator(int p, int q, Token *tokens) {
    int main_op = -1;
    int min_priority = 100; // a large number
    int depth = 0;

    for(int i = p; i <= q; i++) {
        if(tokens[i].type == TK_HEX || tokens[i].type == TK_DEC) {
            continue; // skip numbers
        }
        else if(tokens[i].type == '(') {
            depth++;
        }
        else if(tokens[i].type == ')') {
            depth--;
        }
        // only consider operators at the top level,
        // because we have already checked the parentheses in the previous step,
        else if(depth == 0) { 
            int priority;
            switch (tokens[i].type) {
                case '+':
                case '-': priority = 1; break;
                case '*':
                case '/': priority = 2; break;
                default: priority = 100; // a large number for unknown operators
            }
            //which is the rightmost operator with the lowest priority, because of the associativity of the operators
            if(priority <= min_priority) { 
                min_priority = priority;
                main_op = i;
            }
        }
    }
    return main_op;
}




