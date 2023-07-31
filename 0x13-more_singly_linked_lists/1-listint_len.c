#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - printt the length of elements in the linked list
 * @h: struct or node to be created
 * Return: retunr the number of data in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
