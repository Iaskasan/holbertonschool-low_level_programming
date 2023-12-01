#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node with a given value at the end
 *                   of a doubly linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: The integer value to store in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last_node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
	{
	last_node = last_node->next;
	}
	last_node->next = new_node;
	new_node->prev = last_node;
	return (new_node);
}
