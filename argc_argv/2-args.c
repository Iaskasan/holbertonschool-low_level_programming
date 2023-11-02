#include <stdio.h>

/**
 * main - the main function
 * @argc: argc
 * @argv: argv
 * Return: returns 0 if success
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
	printf("%s\n", argv[i]);
	i++;
	}
	return (0);
}
