#include "main.h"

/**
 * reverse_array - prints a string, in reverse, followed by a new line
 * @n: the number of elements of the array
 * @a: a string
 */

void reverse_array(int *a, int n)
{
	int temp;
	int *b = a + n - 1;

	while (a < b)
	{
	temp = *a;
	*a = *b;
	*b = temp;
	a++;
	b--;
	}
}
