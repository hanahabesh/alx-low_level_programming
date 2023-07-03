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
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		src[i] = dest[i];
		n--;
	}
	return (dest);
}
