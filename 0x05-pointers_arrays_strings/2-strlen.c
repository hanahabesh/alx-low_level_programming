#include "main.h"
/**
 * _strlen - function to return size of the char
 * @s: number
 * return: Return the value
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
		return (i);
}
