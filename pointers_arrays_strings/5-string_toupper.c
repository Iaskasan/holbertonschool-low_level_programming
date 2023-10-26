#include "main.h"

/**
 * string_toupper - Transform loercases char into uppercases
 * @ado: the string
 * Return: returns the string in uppercase
 */

char *string_toupper(char *ado)
{
	int i = 0;

	while (ado[i] != '\0')
	{
		if (ado[i] >= 'a' && ado[i] <= 'z')
		{
			ado[i] -= 32;
		}
		i++;
	}
	return (ado);
}
