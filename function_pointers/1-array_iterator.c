#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Execute a given function on each element of an array.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A pointer to the function to apply on each element.
 *
 * Description:
 * This function iterates over each element of the given array and applies
 * the provided function to each element.
 *
 * Return: Void (No return value).
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0 || array == NULL)
		return;
	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
