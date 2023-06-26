#include "main.h"

/**
 * print_rev - print the reverse
 * @s: text
 * Return: void
*/
void print_rev(char *s)
{
	int len, i;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
