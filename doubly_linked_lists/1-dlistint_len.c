#include "lists.h"

/**
 * dlistint_len - Counts the number of elements of a list
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
	h = h->next;
	i++;
	}
	return (i);
}
