#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
* Description: Projet 1. The last digit
*/
int main(void)
{
	int n;
	int nLastDigit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	nLastDigit = (n % 10);
	if (nLastDigit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, nLastDigit);
	}
	if (nLastDigit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, nLastDigit);
	}
	if (nLastDigit < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nLastDigit)
		;
	}
	return (0);
}
