#include <stdio.h>
/**
 * main - print the name of the program
 * @argc: the count of argument
 * @argv: the point of the arrays
 * Return: return integer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
