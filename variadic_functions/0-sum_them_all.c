#include "variadic_functions.h"

/**
 * sum_them_all - sums 2 or more integers
 * @n: the first integer of the sum
 * Return: returns the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0 ; i < n ; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
