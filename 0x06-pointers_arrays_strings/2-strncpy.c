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
	int i;

	for (i = 0; i < n && src[i] != '\0';)
	{
		dest[i] = src[i];
		i++;
	}
	for (i = 0; i < n;)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

