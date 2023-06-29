#include "main.h"
/**
   * leet - replace the specific words with numbers
    * @a: result of the replaced string
     * Return: return the result
      */
char *rot13(char *a)
{
	int i, j;
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdfghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdfghijklm";
	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == str1[j])
				a[i] = str2[j];
		}
	}
	return (a);
}                     
