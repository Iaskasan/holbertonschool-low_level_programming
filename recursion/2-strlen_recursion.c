#include "main.h"

/**
 * _strlen_recursion - prints a string, followed by a new line
 * @s: the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		{
		_putchar('\n');
		return;
		}
	_putchar(*s);
	_puts_recursion(s + 1);
}
