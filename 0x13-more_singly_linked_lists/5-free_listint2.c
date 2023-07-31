#include "lists.h"
/**
 * free_listint2 - free the whole function
 * @head: the pointer to nodes
 * Return: return freed space of memory
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
