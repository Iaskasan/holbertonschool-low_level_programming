#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: a string
 */

void _puts(char *str)
{
	int len;

	while (str[len] != '\0')
	{
		_putchar(len);
		len++;
	}
	_putchar('\n');
}
