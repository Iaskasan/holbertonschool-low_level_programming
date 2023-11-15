#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: The array to search.
 * @size: The size of the array.
 * @cmp: A pointer to the comparison function.
 *
 * Return: The index of the first element for which the comparison
 * function does not return 0, or -1 if no such element is found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
