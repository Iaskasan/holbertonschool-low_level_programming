#include "main.h"

/**
 * swap_int - Swap two integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int value = 0;

	value = *b;
	*b = *a;
	*a = value;
}
