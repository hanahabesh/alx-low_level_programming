#include "main.h"

/**
 * _strncat - concatenate until n digit
 * @dest: string one
 * @src: string two
 * @n: string to be concatenated
 * Return: return the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0';)
		i++;
	for (j = 0; j < n && src[j] != '\0';)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
