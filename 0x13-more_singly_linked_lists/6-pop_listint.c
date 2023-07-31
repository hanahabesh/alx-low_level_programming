#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete a head node
 * @head: the existing head
 * Return: the data n of the head node
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *ptr;

	if (*head == NULL || head == NULL)
		return (0);
	i = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (i);
}
