#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - Selects the appropriate operation
 * function based on the operator
 *
 * @s: The operator as a string
 *
 * Return: A pointer to the selected operation
 * function or NULL if the operator is invalid
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (s == NULL)
		return (NULL);

	while (ops[i].op != NULL && strcmp(s, ops[i].op))
		i++;
	return (ops[i].f);
}
