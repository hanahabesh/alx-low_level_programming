#include <stdlib.h>
#include "main.h"

/**
 * create_file - a function that create a specific file
 * @text_content: display the text file
 * @filename: name of the file
 * Return: the value or zero
 */
int create_file(const char *filename, char *text_content)
{
	int d, x, i = 0;

	if (!filename)
		return (-1);
	if (filename)
	{
		while (text_content[i])
			i++;
	}
	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(d == -1 || x == -1)
		return (-);
	closed(d);
	return (1);
}
