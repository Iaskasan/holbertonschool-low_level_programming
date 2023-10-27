#include "main.h"
/**
 * _memset - fills a block of memory
 * @s: starting address of memory
 * @b: the desired value
 * @n: member of bytes to be changed
 *
 * Return: Always value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
