#include "main.h"

/**
 * print_diagonal - print diagonal lines
 *
 * @n: number of print lines
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
	}
	_putchar('\n');
}
