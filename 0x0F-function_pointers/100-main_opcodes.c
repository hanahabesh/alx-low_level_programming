#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the opcode
 * @argc: count og an arguments
 * @argv: arguments
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int byte, i;
	int (*a)(int, char **) = main;
	unsigned char op;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < byte; i++)
	{
		op = *(unsigned char *)a;
		printf("%.2x", op);
		if (i == byte - 1)
			continue;
		printf(" ");
		a++;
	}
	printf("\n");
	return (0);
}
