#include "main.h"
/**
 * get_bit - function that retunr bit at a certain index
 * @index: the position to be converted
 * @n: the number to be converted
 * Return: index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
	{
		return (-1);
	}
	bit = (n >> index) & 1;
	return (bit);
}
