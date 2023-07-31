#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - insert number of data at the beginning
 * @head: the starting pointer
 * @n: the constants passed from main function
 * Return: rerturn the address of the next node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));

	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = NULL;
	p->next = *head;
	*head = p;
	return (p);
}
