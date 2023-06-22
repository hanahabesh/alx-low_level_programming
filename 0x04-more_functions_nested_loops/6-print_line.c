#include "main.h"

/**
 * print_line - Print striaght line
 * @n: number of time character to be printed
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
