#include <stdio.h>

void header(void) __attribute__((constructor));
/**
 * header - print the string befor main function
 * Return: nothing
 */
void header(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

