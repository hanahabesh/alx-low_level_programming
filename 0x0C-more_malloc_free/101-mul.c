#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * length - length of the string
 * @l: the length
 *Return: the pointer
 */
int length(char *l)
{
	int i;

	for (i = 0; l[i] != '\0';)
		i++;
	return (i);
}
/**
 * digit - check the arguements are arrays
 * @d: the digits
 * Return: the p
 */
int digit(char *d)
{
	int i;

	for (i = 0; d[i]; i++)
	{
		if (d[i] < 48 || d[i] > 57)
			return (0);
	}
	return (1);
}
/**
 * error - print error
 *
 * Return: the void
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - main function
 * @argc: the arguments count
 * @argv: arguments
 * Return: return void
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, i, c, d1, d2, *R, j = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !digit(s1) || !digit(s2))
		error();
	l1 = length(s1);
	l2 = length(s2);
	l = l1 + l2 + 1;
	R = malloc(sizeof(int) + l);
	if (!R)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		R[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = s1[l1] - 48;
		c = 0;
		for (l2 = length(s2) - 1; l2 >= 0; l2--)
		{
			d2 = s2[l2] - 48;
			c += R[l1 + l2 + 1] + (d1 * d2);
			R[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			R[l1 + l2 + 1] += c;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (R[i])
			j = 1;
		if (j)
			_putchar(R[i] + 48);
	}
	if (!j)
		_putchar('0');
	_putchar('\0');
	free(R);
	return (0);
}

