#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: the string to be used between ints
 * @n: the number of parameters to follow
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
		return;
	va_start(args, n);
	for (i = 0 ; i < n - 1 ; i++)
		if (separator)
		printf("%d%s", va_arg(args, int), separator);
	printf("%d", va_arg(args, int));
	va_end(args);
	printf("\n");
}
