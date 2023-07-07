#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print the name of the program
 * @argc: the count of argument
 * @argv: the point of the arrays
 * Return: return integer
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *h;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			h = argv[i];
			for (k = 0; k < strlen(h); k++)
			{
				if (h[k] < 48 || h[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(h);
			h++;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
