#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of int
 * @min: the minimum value in the array
 * @max: the maximum value in the array
 * Return: returns the pointer to the array
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0 ; i >= min && i <= max ; i++)
	{
	arr[i] = min + i;
	}
	return (arr);
}
