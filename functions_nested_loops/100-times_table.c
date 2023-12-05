#include "main.h"

/**
 *
 */

void print_times_table(int n)

{
	int a, b, c;
	{
		if (n <= 15 && n >= 0)
			for (a = 0 ; a <= n ; a++)
			{
				for (b = 0 ; b <= n ; b++)
				{
					c = a * b;
					if (c < 10)
					{
						_putchar(c + '0');
						{
						if (b != a * b)
							_putchar (',');
						}
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if (c > 9 && c < 100)
					{
						_putchar (c / 10 + '0');
						_putchar (c % 10 + '0');
						_putchar (',');
						_putchar(' ');
						_putchar(' ');
					}
					else
					{
						_putchar (c / 100 + '0');
						_putchar ((c % 100) / 10 + '0');
						_putchar (c % 10 + '0');
						_putchar (',');
						_putchar(' ');
					}
				}
				_putchar('\n');
			}
	}
}
