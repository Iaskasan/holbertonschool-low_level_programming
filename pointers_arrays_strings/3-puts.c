#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: a string
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(len + '0');
		len++;
	}
}
