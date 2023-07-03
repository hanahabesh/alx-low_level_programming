#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - display the sum of the diagonals of the square matrix
 * @a: 2D array
 * @size: the size of the array
 * Return: no return value
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 = sum1 + a[i * size + i];
	for (i = size - 1; i >= 0; i--)
		sum2 = sum2 + a[i * size + (size - i - 1)];
	printf("%d, %d\n", sum1, sum2);
}
