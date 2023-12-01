#include "lists.h"

/**
 * get_dnodeint_at_index - Get the node at a given index in a doubly linked list
 * @head: A pointer to the head of the doubly linked list
 * @index: The index of the node to retrieve
 *
 * Return: If the node at the specified index exists, return a pointer to it.
 *         Otherwise, return NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	return (NULL);

	while (head)
	{
	if (i == index)
		return (head);
	head = head->next;
	i++;
	}
	return (NULL);
}
