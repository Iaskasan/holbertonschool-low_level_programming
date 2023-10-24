#include "main.h"

/**
 * rev_string - prints a string, in reverse
 *
 * @s: a string
 */

void rev_string(char *s)
{
	char *a = s;
	char b;

	while (*a)
	{
	a++;
	}
	--a;
	while (s < a)
	{
		b = *s;
		*s = *a;
		*a = b;
		++s;
		--a;
	}
}
