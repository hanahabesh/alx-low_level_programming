#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - print the arrays of integer and its hexademical number
 * @array: the arrays
 * @size: the size of the arrays
 * @action: pointer to the fuction
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
