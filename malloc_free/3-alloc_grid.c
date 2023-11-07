#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Points to a 2 dimensional array of int
 * @width: the width of the array
 * @height: the height of the array
 * Return: returns the pointer to a 2 dimensional array if int
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int) * height);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}
	return (array);
}
