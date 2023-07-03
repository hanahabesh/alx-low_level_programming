#include "main.h"
/**
 * _memcpy - copy the storage memory of string
 * @dest: the destination of the string
 * @src: the source string
 * @n: the length of copy from the source file
 * Return: the return vlue is the destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		src[i] = dest[i];
	return (dest);
}
