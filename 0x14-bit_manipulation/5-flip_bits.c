#include "main.h"
/**
 * flip_bits - flip to get from one to another
 * @m: number 1
 * @n: number 2
 * Return: return flipped num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value = n ^ m;
	int j = 0;
	int i = 63;
	unsigned long int num;

	while (i >= 0)
	{
		num = value >> i;
		if (num & 1)
			j++;
		i--;
	}
	return (j);
}
