#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function to delete node at certain position
 * @head: the pointer to the first node
 * @index: the position of node that is going to delete
 * Return: return 1 for sucess or -1 for failer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *last, *current = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	if (index == 1)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (i < (index - 1))
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		i++;
	}
	last = current->next;
	current->next = last->next;
	free(last);
	return (1);
}
