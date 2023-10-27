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
	int i = 0, j;

	while (str[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == let[j])
				str[i] = num[j];
		}
	}
	return (str);
}

