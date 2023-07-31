#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - insert nodes at the end of the linked lists
 * @head: the first node
 * @n: the integer pased to the function
 * Return: new added node address or pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tm = *head;
	listint_t *end = malloc(sizeof(listint_t));

	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (tm->next)
		tm = tm->next;
	tm->next = end;
	return (end);
}
