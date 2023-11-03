#include <stdio.h>

void main(void) 
{
	for (char letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
}

