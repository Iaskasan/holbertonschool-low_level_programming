#include <stdio.h>
#include <unistd.h>

/** 
* main - Entry point
* Description: Write a program that prints _putchar
* Return: Always 0 (Success)
*/
int main(void)
{
	char text[] = "_putchar\n";

	write(1, text, sizeof(text) - 1);
	return (0);
}
