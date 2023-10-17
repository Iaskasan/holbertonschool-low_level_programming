#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Description: Write a program that prints _putchar
* Return: Always 0 (Success)
*/

int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0 ; i < 26 ; i++)
{
	putchar(alpha[i]);
}
{
	putchar('\n');
}
	return (0);
}
