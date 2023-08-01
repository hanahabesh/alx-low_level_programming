#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverse ecach nodes back to front
 * @head: pointer to the first node
 * Return: return pointer to the first node or NULL if it is failed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if ((*head) == NULL || head == NULL)
		return (NULL);
	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	(*head)->next = prev;
	return (*head);
}
