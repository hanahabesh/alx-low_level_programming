#include "main.h"

/**
 * _strstr - print the matched substring
 * @haystack: the first string
 * @needle: the second string
 * Return: return the result
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *word1 = haystack;
		char *word2 = needle;

		while (*word1 == *word2 && *word2 != '\0')
		{
			word1++;
			word2++;
		}
		if (*word2 == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}

