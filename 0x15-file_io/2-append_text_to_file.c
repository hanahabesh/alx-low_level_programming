#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - a function that create a specific file
 * @text_content: display the text file
 * @filename: name of the file
 * Return: the value or zero
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int d, x, i = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
	}
	d = open(filename, O_WRONLY | O_APPEND);
	x = write(d, text_content, i);
	if (d == -1 || x == -1)
		return (-1);
	close(d);
	return (1);
}
