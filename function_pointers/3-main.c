#include "3-calc.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, or an exit code on failure
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *operator = argv[2];
	int (*operation)(int, int) = get_op_func(operator);
	int result = operation(num1, num2);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (operation != NULL)
	{
		if ((*operator == '/' || *operator == '%') && num2 == 0)
		{
			printf("Error\n");
			return (100);
		}

		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (99);
	}
}
