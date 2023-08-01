#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop - function to find loopin link
 * @head: pointer to first node
 * Return: return struct or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *second = head;

	if (head == NULL)
		return (NULL);
	while (first && second && second->next)
	{
		second = second->next->next;
		first = second->next;
		if (second == first)
		{
			first = head;
			while (first != second)
			{
				first = first->next;
				second = second->next;
			}
			return (second);
		}
	}
	return (NULL);
}
