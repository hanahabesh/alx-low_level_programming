#include "main.h"

/**
 * factorial - print the factorial of the number
 *
 * @n: the number
 * Return: return the result
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
