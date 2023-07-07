#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name of the program
 * @argc: the count of argument
 * @argv: the point of the arrays
 * Return: return integer
 */
int main(int argc, char *argv[])
{
	int multiple = 0;

	if (argc == 3)
	{
		multiple = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiple);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
