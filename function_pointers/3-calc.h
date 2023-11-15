#ifndef FUNCTION_H
#define FUNCTION_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"


/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/**
 * op_add - operation function
 * @a: first int
 * @b: second int
 */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int main(int argc, char *argv[]);
int (*get_op_func(char *s))(int, int);

#endif
