#include "main.h"

/**
 * _puts_recursion - function to print string with new line
 * @s: the given string
 * Return: return void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
