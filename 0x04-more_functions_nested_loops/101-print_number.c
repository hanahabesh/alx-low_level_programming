#include "main.h"

/**
 * print_number - print integer number
 *
 * Return: no reuslt
 * @n: number to be printed
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + 48);
}

