#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - printt each elements in the linked list
 * @h: the head pointer
 * Return: retunr the number of data in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
