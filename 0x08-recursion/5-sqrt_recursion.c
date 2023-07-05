#include "main.h"

/**
 * _sqrt_ - print the square root of a number
 * @n: a number
 * @i: the count
 * Return: return an integer number
 */
int _sqrt_(int n, int i)
{
	int sqrt = i * i;

	if (sqrt == n)
		return (i);
	if (sqrt > n)
		return (-1);
	return (_sqrt_(n, i + 1));
}
/**
 * _sqrt_recursion - the actual squareroot
 * @n: the natual number
 * Return: return the value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_(n, 0));
}
