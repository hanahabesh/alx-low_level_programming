#include "function_pointers.h"
/**
 * int_index - search the index of the array
 * @array: the arrays
 * @size: the number of elements in array
 * @cmp: the function point
 * Return: return the index of the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
