#include "main.h"

/**
 * _memset - fill the first arrays with the n number of constant
 * @s: the source string
 * @b: the constant that will be filled
 * @n: the length of space to be filled in the source array
 * Return: the return vslue will be the setted string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
