#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - free all allocated memory
 * @h: pointer to the first node
 * Return: return total byte to be freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *new;
	int i;
	size_t l = 0;

	if (*h == NULL || h == NULL)
		return (0);
	while (*h != NULL)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			new = (*h)->next;
			free(*h);
			*h = new;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
