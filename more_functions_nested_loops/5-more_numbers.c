#include "main.h"
#include <stdio.h>

/**
* more_numbers - prints numbers from 0 to 14, 10 times
*
*/

void more_numbers(void)
{
	int more_numbers;
	{
	for (more_numbers = 0; more_numbers <= 9 ; more_numbers++)
		{
		for (more_numbers = 0; more_numbers <= 14 ; more_numbers++)
			putchar(more_numbers / 10 + '0');
			putchar(more_numbers + '0');
		}
	_putchar('\n');
	}
}
