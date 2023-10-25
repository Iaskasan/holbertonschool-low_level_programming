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

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
