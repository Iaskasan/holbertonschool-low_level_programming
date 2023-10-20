#include "main.h"
#include <stdio.h>

/**
 * main - The “Fizz-Buzz" test
 *
 * Return: 0
 */

int main(void)

{
	int a;

	for (a = 1 ; a <= 100 ; a++)
	{
		if (a % 5 == 0 && a % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0 && a < 98)
		{
			printf("Buzz ");
		}
		else if (a % 5 == 0 && a > 98)
		{
			printf("Buzz");
		}
		else if (a % 5 != 0 && a % 3 != 0)
			printf("%d ", a);

	}
	putchar('\n');
	return (0);
}
