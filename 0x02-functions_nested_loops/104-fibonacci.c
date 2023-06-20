#include <stdio.h>

/**
* main - Entry point
*
* Return: return 0
 */
int main(void)
{
	int x;
	long j = 1, k = 2;
	
	for (x = 0; x < 98; x++)
	{
		if (x == 0)
			printf("%ld", j);
		else if (x == 1)
			printf(", %ld", k);
		else
		{
			k = k + j;
			j = k - j;
			printf(", %ld", k);
		}
	}
	printf("\n");
	return (0);
}
