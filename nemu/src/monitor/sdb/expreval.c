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

int expreval(int p, int q, Token *tokens, bool *success) {
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
        int val1, val2;
        int op = -1;
        op = find_main_operator(p, q, tokens);
        if(op == -1) {
            *success = false;
            printf("No operator found in expression\n");
            assert(0);
            return 0;
        }
        val1 = expreval(p, op - 1, tokens, success);
        // printf("Strings of tokens from %d to %d: ", p, op - 1);
        // for(int i = p; i < op; i++) {
        //     printf("%s ", tokens[i].str);
        // }
        // printf("\n[%d, %d]val1 = %u\n", p, op - 1, val1);
        val2 = expreval(op + 1, q, tokens, success);
        // printf("Strings of tokens from %d to %d: ", op + 1, q);
        // for(int i = op + 1; i <= q; i++) {
        //     printf("%s ", tokens[i].str);
        // }
        // printf("\n[%d, %d]val2 = %u\n", op + 1, q, val2);

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
                //p is matching with a ')' before q, so p and q are not a pair of parentheses
                return false;
            }
            depth--;
        }
    }
    //EVEN IF DEPTH IS 0, IT DOES NOT MEAN THAT THE PARENTHESES ARE A PAIR, 
    //BECAUSE THERE MAY BE OTHER PARENTHESES INSIDE,
    //LIKE (A+B)*(C+D), THE PARENTHESES AROUND A+B AND C+D ARE NOT A PAIR
    return true;
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
    //printf("____p = %d, q = %d, main operator: %c at position %d___\n", p, q, tokens[main_op].type, main_op);
    return main_op;
}

bool valid_parentheses(Token *tokens, int nr_token) {
    int depth = 0;
    for(int i = 0; i < nr_token; i++) {
        if(tokens[i].type == '(') {
            depth++;
        }
        else if(tokens[i].type == ')') {
            depth--;
            if(depth < 0) {
                printf("Invalid parentheses at token %d\n", i);
                return false;
            }
        }
    }
    return depth == 0;
}




