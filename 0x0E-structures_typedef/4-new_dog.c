#include <stdlib.h>
#include "dog.h"
/**
 * strleng - find the length of string
 * @l: string length
 *
 * Return: return the length
 */
int strleng(char *s)
{
	int i = 0;
	
	while (*s++)
	{
		i++;
	}
	return (i);
}
/**
 * cpystr - function to copy the string
 * @s1: the original string
 * @s2: the copied spot
 * Return: return the copy string
 */
char *cpystr(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}
/**
 * new_dog - copy the string from struct members
 * @name: name of the user
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: dog information in the form of struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int l1, l2;
	dog_t *d;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	l1 = strleng(name);
	l2 = strleng(owner);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * (l1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (l2 + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = cpystr(d->name, name);
	d->age = age;
	d->owner = cpystr(d->owner, owner);
	return (d);
}

