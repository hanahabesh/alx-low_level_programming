#include "main.h"

/**
 * prime - the actual prime number
 * @n: the number
 * @m: the factorial
 * Return: the integer
 */
int prime(int n, int m)
{
	if (n <= 1)
		return (0);
	if (n % m == 0 && m > 1)
		return (0);
	return (1);
}
/**
 * is_prime_number - the actual prime number
 * @n: the number
 * Return: the integer
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}
