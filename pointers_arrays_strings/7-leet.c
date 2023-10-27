#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: the string
 * Return: return the encoded string
 */

char *leet(char *str)
{
	char *let = "aeotlAEOTL";
	char *num = "4307143071";
	int i = 0, j = 0;

	for (let[i] = 0 ; i < '\0' ; i++)
	for (num[j] = 0 ; j < '\0' ; j++)
		if (i == j)
		{
		*let = *num;
		}
	return (str);
}
