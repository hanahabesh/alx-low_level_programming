#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - memory allocation
 * @b: an integer value
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *S;

	S = malloc(b);
	if (S == NULL)
		exit(98);
	return (S);
}
