 #include <stdio.h>
/**
 * main - print the name of the program
 * @argc: the count of argument
 * @argv: the point of the arrays
 * Return: return integer
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
