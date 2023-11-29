#include "lists.h"


/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the pointer to the start of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
    list_t *last_node;
    int len = 0;

	if (new_node == NULL) 
	{
		return (NULL);
	}
    while (str[len])
    {
        len++;
    }

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
	{
		last_node = *head;
		while (last_node->next != NULL)
        {
			last_node = last_node->next;
        }
		last_node->next = new_node;
	}
	return (new_node);
}
