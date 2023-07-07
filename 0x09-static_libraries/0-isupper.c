#include "main.h"

/**
 * _isupper - Check upper or lower case
 * @c: the number to be printed
 *
 * Return: 1 for uppercase and 0 for lower
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
