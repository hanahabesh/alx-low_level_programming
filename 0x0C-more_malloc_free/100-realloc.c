#include <stdlib.h>
#include "main.h"
/**
 * _realloc - realloc function using malloc
 * @ptr: pointer for the old string
 * @old_size: old size in byte
 * @new_size: new size to be allocated
 * Return: the void pointer for newly allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *N;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		N = malloc(new_size);
		if (N == NULL)
			return (NULL);
		return (N);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	N = malloc(new_size);
	if (N == NULL)
		return (NULL);
	while (i < old_size && i < new_size)
	{
		N[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (N);
}

