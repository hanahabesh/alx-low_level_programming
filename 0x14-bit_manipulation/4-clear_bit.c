#include "main.h"
/**
 * clear_bit - function to set bit to 1
 * @index: a certain position to be setted
 * @n: the integer num
 * Return: return set number
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
