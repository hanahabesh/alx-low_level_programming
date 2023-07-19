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
	int i, byt;
	int (*p)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Erro\n");
		exit(1);
	}
	byt = atoi(argv[1]);
	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < byt; i++)
	{
		opcode = *(unsigned char *)p;
		printf("%.2x", opcode);
		if (i == byt - 1)
			continue;
		printf(" ");
		p++;
	}
	printf("\n");
	return (0);
}

