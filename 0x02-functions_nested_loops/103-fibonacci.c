#include <stdio.h>

/**
* main - Entry point
*
* Return: Always return 0
*/
int main(void)
{
	int i;
	long j = 1, k = 2, sum = k;

	for (i = 0; k + j < 4000000; ++i)
	{
		k = k + j;

		if (k % 2 == 0)
			sum = sum + k;

		j = k - j;
	}
	printf("%ld\n", sum);
	return (0);
}


