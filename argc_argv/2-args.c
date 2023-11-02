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

	if (argc > 0)
	while (**argv != '\0')
	{
	printf("%s\n", argv[i]);
	i++;
	}
	return (0);
}
