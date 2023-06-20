#include "main.h"

/**
* times_table - Entry point
*
* Return: return value
*/
void times_table(void)
{
	int h, k, z, u, d;

	for (h = 0; h <= 9; h++)
	{
		for (k = 0; k <= 9; k++)
		{
			z = h * k;
			if (z > 9)
			{
				u = z % 10;
				d = (z - u) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (k != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
