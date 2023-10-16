#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
* Description: 2. I sometimes suffer from insomnia. And when I can't fall
* asleep, I play what I call the alphabet game
*/
int main(void)
{
	int n1, n2, n3, n4;

	for (n1 = '0' ; n1 <= '9' ; n1++)
	for (n2 = '0' ; n2 <= '9' ; n2++)
	for (n3 = '0' ; n3 <= '9' ; n3++)
	for (n4 = '0' ; n4 <= '9' ; n4++)
	if (n1 * 10 + n2 < n3 * 10 + n4)
{
	putchar (n1);
	putchar (n2);
	putchar (' ');
	putchar (n3);
	putchar (n4);
	if (n1 == '9' && n2 == '8' && n3 == '9' && n4 == '9')
{
	putchar('\n');
}
	else
{
	putchar(',');
	putchar(' ');
}
}
	return (0);
}
