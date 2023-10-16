#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
* Description: 2. I sometimes suffer from insomnia. And when I can't fall
* asleep, I play what I call the alphabet game
*/
int main(void)
{
	int c;

	for (c = '0' ; c <= '9' ; c++)
{
	putchar (c);
	if (c != '9')
{
	putchar (',');
	putchar (' ');
}
}
	return (0);
}
