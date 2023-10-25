#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: the destination of the string
 * @src: the source of the string
 * @n: number of byte to be copied
 * Return: Returns the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[i] != '\0' && src[i] <= dest[a] && i < n)
	{
		src[i] = dest[a];
		i++;
	}
	return (dest);
}
