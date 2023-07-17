#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the allocated memory
 * @d: the memory space to be free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
