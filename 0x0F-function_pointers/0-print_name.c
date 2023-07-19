#include "function_pointers.h"
/**
 * print_name - call back function
 * @name: the name of the user
 * @f: the pointer variable
 * Return: nothing is gone be returned
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

