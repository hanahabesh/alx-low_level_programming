#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - print the new node on a certain position
 * @head: first pointer to node
 * @idx: index of lists
 * @n: the new node data to be inserted
 * Return: return new node pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insert = malloc(sizeof(listint_t));
	listint_t *sur = *head;
	unsigned int i = 0;

	if (insert == NULL || head == NULL)
		return (NULL);
	insert->n = n;
	insert->next = NULL;
	if (idx == 0)
	{
		insert->next = sur;
		*head = insert;
		return (insert);
	}
	while (i < (idx - 1))
	{
		if (sur == NULL || sur->next == NULL)
			return (NULL);
		sur = sur->next;
		i++;
	}
	insert->next = sur->next;
	sur->next = insert;
	return (insert);
}
