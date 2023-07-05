#include "main.h"

/**
 * _strlen_recursion - print the length of the string
 * @s: the source string
 * Return: return the length of the string
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s != '\0')
	{
		length = 1 + _strlen_recursion(s + 1);
		return (length);
	}
	return (0);
}
