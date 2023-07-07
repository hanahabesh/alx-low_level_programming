#include "main.h"

/**
 * _strcmp - compare the similarity of two string
 * @s1: the first string
 * @s2: the second string
 * Return: the value
 */
int _strcmp(char *s1, char *s2)
{
	int i, value = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		value = s1[i] - s2[i];
		if (value != 0)
		{
			break;
		}
	}
	return (value);
}
