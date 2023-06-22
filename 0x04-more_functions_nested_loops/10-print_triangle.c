#include "main.h"

/**
 * void print_triangle - print triangl using hashtagg
 * @size: ghs
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j, h;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j >= 1; j--)
				_putchar(' ');
			for (h = 1; h <= i; h++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
