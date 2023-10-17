#include "main.h"

/**
* print_alphabet_x10 - yolo
* print_alphabet_x10 - prototype
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char i;
	int count = 0;

	while (count++ <= 9)
{
	for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
	_putchar('\n');
}
}
