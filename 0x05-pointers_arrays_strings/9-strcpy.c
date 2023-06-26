#include "main.h"
/**
 * _strcpy - copy and display the text
 * @dest: return number
 * @src: number to
 * Return: return the copy chart
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; (src + 1)[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
