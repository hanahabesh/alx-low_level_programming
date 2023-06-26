#include "main.h"

/**
 * swap_int - swap two integers
 * @a: number one
 * @b: number two
 * return: Return void
 */
void swap_int(int *a, int *b)
{
	int temporary;
	
	temporary = *a;
	*a = *b;
	*b = temporary;
}
