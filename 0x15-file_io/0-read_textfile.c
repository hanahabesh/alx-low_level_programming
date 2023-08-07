#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a function to read a file
 * @filename: the intended file name
 * @letters: the proposed sie in byte
 * Return: return the value or zero
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x;
	ssize_t y;
	ssize_t z;
	char *descriptor;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	descriptor = malloc(sizeof(char) * letters);
	z = read(x, descriptor, letters);
	y = write(STDOUT_FILENO, descriptor, z);
	free(descriptor);
	close(x);
	return (y);
}
