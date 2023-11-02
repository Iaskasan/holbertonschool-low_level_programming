#include <stdio.h>

/**
 * main - the main function
 * @argc: argc
 * @argv: argv
 * Return: returns 0 if success
 */

int main(int argc, char **argv)
{
	if (argc > 0)
	printf("%s\n", *argv);
	return (0);
}
