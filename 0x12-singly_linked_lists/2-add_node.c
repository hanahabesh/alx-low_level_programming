#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - addition of new node at the beginning
 * @head: the node to be added
 * @str: the string to be added
 * Return: return added string
 */
list_t *add_node(list_t **head, const char *str)
{
	int length = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[length])
		length++;
	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
