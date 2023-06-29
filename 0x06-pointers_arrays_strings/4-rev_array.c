#include "main.h"

/**
 * reverse_array - reverse the arrays of numbers
 * @a: reversed value
 * @n: the length of the array
 * Return: return the reverede number
 */
void reverse_array(int *a, int n)
{
	int i, ch;

	for (i = 0; i < n / 2; i++)
	{
		ch = a[i];
		a[i] = a[n - 1 - i];
		a[n - i] = ch;
	}
}
