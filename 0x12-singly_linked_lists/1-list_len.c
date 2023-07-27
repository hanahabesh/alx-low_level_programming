#include <stdlib.h>
#include "lists.h"

/**
 * list_len - count the number of elements of linked list
 * @h: the pointer to linked list
 *
 * Return: count of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
