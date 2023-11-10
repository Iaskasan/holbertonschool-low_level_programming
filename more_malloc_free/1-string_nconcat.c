#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a given string
 * @s1: yolo
 * @s2: yolo
 * @n: yolo
 * Return: returns the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconc;
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	unsigned int j;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	nconc = malloc(sizeof(char) * (len1 + n + 1));
	if (nconc == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < len1; i++)
	{
		nconc[i] = s1[i];
	}
	for (j = 0 ; j < n; j++)
	{
		nconc[len1 + j] = s2[j];
	}
	if (n >= j)
	{
	n = len2;
	}
	nconc[len1 + n] = '\0';
	return (nconc);
}
