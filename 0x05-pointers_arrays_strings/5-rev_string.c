#include "main.h"
/**
 * rev_string - reversing the text
 * @s: reverse print
 * Return: return void
 */
void rev_string(char *s)
{
	int length, i = 0;
	char reverse = s[0];

	while (s[i] != '\0')
		i++;
	for (length = 0; length < i; length++)
	{
		i--;
		reverse = s[length];
		s[length] = s[i];
		s[i] = reverse;
	}
}
