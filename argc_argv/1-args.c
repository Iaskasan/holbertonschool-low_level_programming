#include <stdio.h>

/**
 * main - the main function
 * @argc: argc
 * @argv: argv
 * Return: returns 0 if success
 */

int main(int argc, char **argv)
{
	if (**argv != '\0')
	printf("%d\n", argc);
	return (0);
}
