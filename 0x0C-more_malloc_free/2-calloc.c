#include <stdlib.h>
#include "main.h"
/**
 * _calloc - creat a calloc function with malloc
 * @nmemb: elements of an array
 * @size: the size of each element in byte
 * Return: the void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, length;
	char *S;

	if (nmemb == 0 || size == 0)
		return (NULL);
	length = nmemb * size;
	S = malloc(length);
	if (S == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		S[i] = 0;
	return (S);
}
