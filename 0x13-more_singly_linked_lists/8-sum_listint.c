#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - add all the data in the nodes
 * @head: pointer nod to the first node
 * Return: return the sum of the dat in the linked nodes
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
