#include "main.h"

/**
 * string_toupper - Transform loercases char into uppercases
 * @ado: the string
 * Return: returns the string in uppercase
 */

char *string_toupper(char *ado)
{
	int i;

	for (i = 0 ; i <= *ado ; i++)
	if (*ado < 123 && *ado > 97)
		ado -= 32;
	return (ado);
}
