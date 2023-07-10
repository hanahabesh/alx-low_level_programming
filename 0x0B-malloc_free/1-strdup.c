#include <stdlib.h>
#include "main.h"
/**
 * _strdup - deplicate the string
 * @str: the original string
 * Return: return the duplicated
 */
char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0';)
		i++;
	dup = malloc((i * sizeof(char)) + 1);
	if (dup == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		dup[j] = str[j];
	}
	dup[j] = '\0';
	return (dup);
}
