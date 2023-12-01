#include "lists.h"



dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL || index < 1)
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