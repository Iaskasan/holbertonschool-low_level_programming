#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
* Description: 2. I sometimes suffer from insomnia. And when I can't fall
* asleep, I play what I call the alphabet game
*/
int main(void)
{
	int n1, n2;

	for (n1 = '0' ; n1 <= '9' ; n1++)
	for (n2 = '1' ; n2 <= '9' ; n2++)
	if (n1 != n2)
	if (n1 < n2)
{
	putchar (n1);
	putchar (n2);
	if (n1 != '8')
{
	putchar (',');
	putchar (' ');
}
}
{
	putchar('\n');
}
	return (0);
}
