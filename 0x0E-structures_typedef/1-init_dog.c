#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize function
 * @d: the difined v
 * @name: the name of the user
 * @age: age description
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
