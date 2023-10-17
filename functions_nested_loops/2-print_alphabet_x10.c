#include "main.h"

/**
* print_alphabet_x10 - yolo
* print_alphabet_x10 - prototype
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char i;
	int numRepetitions = 10;

	for (int repetition = 0; repetition < numRepetitions; repetition++)
{
	for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
	_putchar('\n');
}
}
