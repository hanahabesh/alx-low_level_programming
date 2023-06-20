#include <stdio.h>

/**
* main - Entry point
*
* Return: Always return to 0
*/
int main(void)
{
	int i, m5, m3, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		m5 = i % 5;
		m3 = i % 3;
		if (m3 == 0 || m5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
