#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void close_file_int(int d);
char *new_buf(char *file);

/**
 * close_file_int - file to be shutdown
 * @d: file to be assigned
 * Return: num
 */
void close_file_int(int d)
{
	int i;

	i = close(d);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant close fd %d\n", d);
		exit(100);
	}
}
/**
 * new_buf - new buffer for new file
 * @file: new file
 * Return: new file or ero
 */
char *new_buf(char *file)
{
	char *new;

	new = malloc(sizeof(char) * 1024);
	if (!new)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (new);
}
/**
 * main - main function
 * @argv: to be write
 * @argc: count the command line
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	char *new;
	int i, one, x, y;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	new = new_buf(argv[2]);
	i = open(argv[1], O_RDONLY);
	x = read(i, new, 1024);
	one = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (i == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n",
argv[1]);
			free(new);
			exit(98);
		}
		y = write(one, new, x);
		if (one == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
					"Erro: Can't write to %s\n", argv[2]);
			free(new);
			exit(99);
		}
		x = read(i, new, 1024);
		one = open(argv[2], O_WRONLY | O_APPEND);
	} while (x > 0);
	free(new);
	close_file_int(i);
	close_file_int(one);
	return (0);
}
