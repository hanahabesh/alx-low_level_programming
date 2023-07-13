#include <stdlib.h>
#include "main.h"
/**
 * array_range - print the integers between the min and max
 * @min: the minimum range
 * @max: the maximum range
 * Return: return the integer values
 */
int *array_range(int min, int max)
{
	int i, length;
	int *p;

	if (min > max)
		return (NULL);
	length = (max - min) + 1;
	p = malloc(length * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max;)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
