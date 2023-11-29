#include "lists.h"

/**
 * 
*/

size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
    printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
    h = h->next;
    count++;
    }
    return (count);
}