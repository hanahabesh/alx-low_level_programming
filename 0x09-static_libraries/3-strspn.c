#include "main.h"

/**
 * _strspn - count the match chars
 * @s: the source string one
 * @accept: the source string two
 * Return: return the length of match
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, match, length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				match = 1;
			}
		}
		if (match == 0)
			break;
	}
	return (length);
}
