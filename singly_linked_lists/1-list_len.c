#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 * @h: Pointer to the first node of the list.
 *
 * Description: Iterates through each node of the list and increments
 * a counter for each node until the end of the list is reached.
 * Return: The total number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
