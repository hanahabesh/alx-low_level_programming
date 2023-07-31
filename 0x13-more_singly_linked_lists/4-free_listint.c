#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free that allocated memory
 * @head: the first node point to the first node
 * Return: return free space
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
