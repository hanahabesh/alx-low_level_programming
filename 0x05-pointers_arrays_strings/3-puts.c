#include "main.h"

/**
 * _puts - display text
 * @str: text
 * Return: voide
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

