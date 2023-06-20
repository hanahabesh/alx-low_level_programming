#include "main.h"

/**
* print_alphabet_x10 - Write an alphabet x10
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int c;
	char d;

	for (c = 1; c <= 10; c++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}

