#include "main.h"

/**
 * _strcpy - copy a string from a src to a dest
 * @dest: the destination of the copy
 * @src: the source for the copy
 * Return: always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
return (dest);
}
