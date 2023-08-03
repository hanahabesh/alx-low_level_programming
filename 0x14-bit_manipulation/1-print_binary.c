#include "main.h"

/**
 * print_binary - display the binary representative o decimal number
 * @n: a number to be binary
 * Return: the binary number
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int k = 63;
	int j = 0;

	while (k >= 0)
	{
		num = n >> k;
		if (num & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
		{
			_putchar('0');
		}
		k--;
	}
	if (!j)
	{
		_putchar('0');
	}
}
