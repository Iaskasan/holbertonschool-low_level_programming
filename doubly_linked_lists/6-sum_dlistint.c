#include "lists.h"

/**
 * sum_dlistint - Calculate the sum of all the integers in a doubly linked list
 * @head: A pointer to the head of the doubly linked list
 *
 * Return: The sum of all the integers in the list. If the list is empty,
 *         return 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	return (0);

	while (head)
	{
	sum = sum + (head->n);
	head = head->next;
	}
	return (sum);
}
