#include "main.h"

/**
 * _strchr - print the string after the specific char
 * @s: the original string
 * @c: the char to be search
 * Return: return the value
 */
char *_strchr(char *s, char c)
{
	int i;
	char *dest;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			dest = s + i;
			return (dest);
		}
	}
	return ('\0');
}
