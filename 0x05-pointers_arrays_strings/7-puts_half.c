#include "main.h"
/**
 * puts_half - print the half of it
 * @str: print
 * Return: return void
 */
void puts_half(char *str)
{
	int n;
	int length_of_the_string = 0;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	if (length_of_the_string % 2 != 0)
	{
		n = (length_of_the_string - 1) / 2;
		n += 1;
	}
	else
	{
		n = length_of_the_string / 2;
	}
	for (; n < length_of_the_string; n++)
		_putchar(str[n]);
	_putchar('\n');
}
