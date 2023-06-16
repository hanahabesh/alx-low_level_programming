#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always o (Success)
 */
int main(void)
{
	int i;

	i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
