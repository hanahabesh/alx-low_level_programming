#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: the count of argument
 * @argv: the point of the arrays
 * Return: return void
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
