#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t _listint_length(const listint_t *head);
/**
 * print_listint_safe - print list with a memory address
 * @head: pointer to the first node
 * Return: number of nodes with memory address
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t point, i;

	i = 0;
	point = _listint_length(head);
	if (point == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			point++;
		}
	}
	else
	{
		while (i < point)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (point);
}
/**
 * _listint_length - function to operate number of nodes
 * @head: pointer to first node
 * Return: length or 0
 */
size_t _listint_length(const listint_t *head)
{
	size_t point = 1;
	const listint_t *one, *two;

	if (head->next == NULL || head == NULL)
		return (0);
	one = head->next;
	two = (head->next)->next;
	while (two != 0)
	{
		if (one == two)
		{
			one = head;
			while (one != two)
			{
				point++;
				one = one->next;
				two = two->next;
			}
			one = one->next;
			while (one != two)
			{
				point++;
				one = one->next;
			}
			return (point);
		}
		one = one->next;
		two = (two->next)->next;
	}
	return (0);
}
