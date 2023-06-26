#include "main.h"
/**
 * _strlen - function to return size of the char
 * @s: number
 * Return: the lenght of the string
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
