#include "main.h"
#include "ctype.h"

/**
* _islower - yolo
* _islower - prototype
* Return: Always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
