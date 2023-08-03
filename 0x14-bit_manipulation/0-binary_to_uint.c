#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - function to convert binary to unsigned integer
 * @b: character to be converted
 * Return: return converted number to main fun
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int a = 0;

	if (b == NULL)
		return (0);
	while (b[a])
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decimal = 2 * decimal + (b[a] - '0');
		a++;
	}
	return (decimal);
}
