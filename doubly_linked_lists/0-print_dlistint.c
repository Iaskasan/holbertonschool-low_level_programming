#include "lists.h"

/**
 * print_dlistint - Prints the elements of a doubly linked list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of elements printed.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	i++;
	}
	return (i);
}
