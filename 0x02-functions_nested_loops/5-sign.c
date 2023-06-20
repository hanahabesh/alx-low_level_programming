#include "main.h"

/**
* print_sign - User function.
* @n: The character going to print.
*
* Return: return 1 and print char.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
