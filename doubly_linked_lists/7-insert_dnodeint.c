#include "lists.h"


/**
 * insert_dnodeint_at_index - Inserts a new node with a given value at a
 *                            specified index position in a doubly linked list.
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @idx: The index position to insert the new node.
 * @n: The integer value to store in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (*h == NULL)
		return (add_dnodeint_end(h, n));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (count < idx - 1 && current->next != NULL)
	{
		current = current->next;
		count++;
	}

		if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
