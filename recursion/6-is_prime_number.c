#include "main.h"

/**
 * checkerSneaker - checks if the input is a prime number
 * @n: the number to be checked
 * @i: the integer that will determines if n is prime or not
 * Return: returns 1 if the input is a prime number else 0
 */

int checkerSneaker(int n, int i)
{
	if (n <= 1 || i <= 1)
	{
		return (0);
	}

	if (i == n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (checkerSneaker(n, i + 1));
}

/**
 * is_prime_number - checks if the input is a prime number
 * @n: the number to be checked
 * Return: returns 1 if the input is a prime number
 */

int is_prime_number(int n)
{
	return (checkerSneaker(n, 2));
}
