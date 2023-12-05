#include <stdio.h>

int main(void)
{
	char userName[100];
	printf("What is your name? ");
	scanf("%s", userName);
	printf("Your name is %s.\n", userName);
	return (0);
}
