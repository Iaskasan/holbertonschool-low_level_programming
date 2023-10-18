#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @x: is the modulo 10
* Return: Returns the last digit of x
*/

int print_last_digit(int x)
{
	int xLast;

	xLast = x % 10;
{
	_putchar ('0' + xLast);
}
	return (xLast);
}
