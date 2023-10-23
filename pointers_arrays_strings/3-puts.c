#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: a string
 */

void _puts(char *str)
{
	int tab = 0;

		while (str[tab] != '\0')
		{
		_putchar(str[tab]);
		tab++;
		}
	_putchar('\n');
}
