#include "main.h"

/**
 * print_triangle - Prints a triangle
 *
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (a = 0 ; a < size ; a++)
		{
			_putchar('\n');
			for (b = 1 ; b <= size ; b++)
				if (b + a < size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('\#');
				}
		}
}
