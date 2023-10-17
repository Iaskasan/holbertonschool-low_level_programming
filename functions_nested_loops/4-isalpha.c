#include "main.h"

/**
* _isalpha - returns 1 if character is lowercase else 0
* @c: The character to be checked.
* Return: Always 0 (Success)
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') && (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
