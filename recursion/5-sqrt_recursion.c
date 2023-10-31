#include "main.h"

/**
 * _sqrt_recursion - Calculate the integer square root of a number.
 * _sqrt - Auxiliary function for computing the square root.
 * @n: The number for which we want to find the square root.
 * @i: Auxiliary variable for testing square of numbers.
 * Return: The integer square root of n, or -1 if it is not an integer.
 */

int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (i * i > n)
	{
		return (-1);
	}

	else if (i * i == n)
	{
		return (i);
	}

	return (_sqrt(n, i + 1));
}

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
