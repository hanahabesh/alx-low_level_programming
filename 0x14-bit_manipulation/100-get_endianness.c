#include "main.h"
/**
 * get_endianness - function to check the result
 *
 * Return: value or zero
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *n = (char *) & m;
	return (*n);
}
