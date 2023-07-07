#include "main.h"

/**
 * _strcat - concatenate two string
 * @dest: the first string
 * @src: the second string
 * Return: the value
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0';)
		i++;
	for (j = 0; src[j] != '\0';)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
