#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - nth index node
 * @index: count of the node that is goint to be printed
 * @head: the head pointer to the first node
 * Return: return the nth value
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		count++;
	}
	return (head);
}
