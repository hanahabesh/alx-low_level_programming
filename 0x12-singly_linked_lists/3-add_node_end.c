#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - additional node at the end
 * @head: node to be added
 * @str: string
 * Return: the node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t i;
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	i = 0;
	while (str[i])
	{
		i++;
	}
	new->len = i;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
