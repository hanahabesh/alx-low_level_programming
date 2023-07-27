#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free the node
 * @head: a node
 *
 * Return: return nothing
 */
void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
