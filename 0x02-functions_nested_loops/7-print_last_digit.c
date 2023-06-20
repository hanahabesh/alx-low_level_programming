#include "main.h"
/**
* print_last_digit - User function
*
* @c: The last digit.
* Return: return the last digit value or zero.
*/
int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
