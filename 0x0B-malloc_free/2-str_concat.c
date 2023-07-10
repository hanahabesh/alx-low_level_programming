#include <stdlib.h>
#include "main.h"
/**
 * str_concat - deplicate the string
 * @s1: the original string 1
 * @s2: thw other string
 * Return: return the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int size, i, j, k = 0;
	char *S;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i];)
		i++;
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s2[j];)
		j++;
	size = i + j;
	S = malloc((size * sizeof(char)) + 1);
	if (S == NULL)
		return (NULL);
	j = 0;
	while (k < size)
	{
		if (k <= i)
		{
			S[k] = s1[k];
		}
		if (k >= i)
		{
			S[k] = s2[j];
			j++;
		}
		k++;
	}
	S[k] = '\0';
	return (S);
}


