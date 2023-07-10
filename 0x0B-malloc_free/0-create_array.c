#include <stdlib.h>
#include "main.h"
/**
 * create_array - print chart using malloc function
 * @size: the total bytes of the array
 * @c: the character
 * Return: the pointer
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
