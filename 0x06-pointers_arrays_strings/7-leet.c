#include "main.h"
/**
 * leet - replace the specific words with numbers
 * @a: result of the replaced string
 * Return: return the result
 */
char *leet(char *a)
{
	int i, j;
	char str1[] = "aeotlAEOTL";
	char str2[] = "4307143071";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == str1[j])
				a[i] = str2[j];
		}
	}
	return (a);
}
