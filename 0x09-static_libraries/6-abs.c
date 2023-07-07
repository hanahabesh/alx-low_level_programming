#include "main.h"
/**
* _abs - code to print absolute number
*
* @c: Absolute number to be printed.
* Return: absolute value of number or zero.
*/
int _abs(int c)
{
	if (c < 0)
	{
		int abso_value;

		abso_value = -1 * c;
		return (abso_value);
	}
	return (c);
}

