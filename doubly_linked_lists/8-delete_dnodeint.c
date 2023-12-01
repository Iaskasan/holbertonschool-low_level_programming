#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a
 *                            doubly linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @index: The index position of the node to delete (0-based).
 *
 * Return: 1 if the node is successfully deleted, -1 on failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL) 
		return (-1);

	if (current->prev != NULL)
	{
		current->prev->next = current->next;
    }
	else
	{
		*head = current->next;
	}

	if (current->next != NULL) {
		current->next->prev = current->prev;
	}

	free(current);
	return (1);
}
