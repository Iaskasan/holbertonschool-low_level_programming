#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the number of src char to be printed
 * Return: returns the concatenated string to *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int destLen = 0;

	while (dest[destLen] != '\0')
	{
	destLen++;
	}
	if (i <= n)
	while (src[i] != '\0')
	{
	dest[destLen + i] = src[i];
	i++;
	if (i <= n)
		break;
	}
dest[destLen + i] = '\0';
return (dest);
}
