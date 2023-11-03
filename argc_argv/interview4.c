#include <stdio.h>

int main(void) 
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (a != b && a != c && b != c)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
