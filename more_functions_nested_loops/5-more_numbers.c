#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 *
 */

void more_numbers(void)
{
	int more_numbers, i;

	for (more_numbers = 0; more_numbers <= 9 ; more_numbers++)
	{
		for (i = 0; i <= 14 ; i++)
		{
			if (i > 9)
			_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		}
	_putchar('\n');
	}
}
