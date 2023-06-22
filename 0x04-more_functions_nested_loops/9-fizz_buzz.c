#include <stdio.h>

/**
 * main - Fizz Buzz
 *
 * Return: no return value
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz ");
		if (i % 3 == 0)
			printf(" Fizz ");
		else if (i % 5 == 0)
			printf(" Buzz ");
		else
			printf(" %d ", i);
	}
	putchar('\n');
	return (0);
}
