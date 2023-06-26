#include <stdio.h>
/**
 * print_array - print the array of string
 * @a: array
 * @n: number of arrays
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
}
