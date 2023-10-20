#include "main.h"
#include <stdio.h>

/**
 * print_line - prints numbers from 0 to 14, 10 times
 *
 * @n: a number defined by user
 */

void print_line(int n)

{
	while (n > 0)
	{
		n--;
		_putchar('_');
	}
	_putchar(' ');
}
