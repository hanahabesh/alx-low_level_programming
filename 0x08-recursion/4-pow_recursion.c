#include "main.h"

/**
 * _pow_recursion - print the power of the number
 * @x: the number
 * @y: the power
 * Return: the integer number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
