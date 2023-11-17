#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @n: the number of parameters
 * @separator: the separators between strings (if any)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
			printf("(nil)");
			return;
		printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
