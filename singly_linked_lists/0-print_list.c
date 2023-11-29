#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the start of the list.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
    printf("[%d] %s\n", h->len, h->str ? h->str : "[0] (nil)");
    h = h->next;
    count++;
    }
    return (count);
}