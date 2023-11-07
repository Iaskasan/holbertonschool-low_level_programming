#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of characters
 * @size: the size of the array
 * @c: the char to be put in the array
 * Return: returns the pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		array[i] = c;
	}
	return (array);
}
