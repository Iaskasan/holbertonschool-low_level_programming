#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: number of lines
 */

void print_diagonal(int n)

{
	int a, b;

	for (a = 1 ; a <= n ; a++)
	{
		for (b = 0 ; b < a ; b++)
			if (a > b + 1)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
