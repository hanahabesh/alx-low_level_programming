#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define struct
 * @name: name of the user
 * @age: age of the user
 * @owner: user
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
