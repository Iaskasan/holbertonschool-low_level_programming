#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - print_most_numbers
*
*/

void print_most_numbers(void)
{
	int print_most_numbers;

	for (print_most_numbers = 0; print_most_numbers <= 9 ; print_most_numbers++)
	if (print_most_numbers != 2 && print_most_numbers != 4)
	_putchar(print_most_numbers + '0');
	_putchar('\n');
}
