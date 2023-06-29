#include "main.h"
/**
 * _strncpy - copy the string
 * @dest: original string
 * @src: copy string
 * @n: length of copied string
 * Return: return the copied string
 */
char *_strncpy(char *dest, char *src, int n)
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

