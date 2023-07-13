#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatnate the two string up to limited bytes
 * @s1: string one
 * @s2: string two
 * @n: the number of byte to be concatenated
 * Return: the new space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, size;
	char *S;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i] != '\0';)
	{
		i++;
	}
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s2[j] != '\0';)
	{
		j++;
	}
	if (n >= j)
		size = i + j;
	else
		size = i + n;
	S = malloc(size * sizeof(char) + 1);
	if (S == NULL)
		return (NULL);
	j = 0;
	for (k = 0; k < size; k++)
	{
		if (k <= i)
			S[k] = s1[k];
		if (k >= i)
		{
			S[k] = s2[j];
			j++;
		}
	}
	S[k] = '\0';
	return (S);
}
