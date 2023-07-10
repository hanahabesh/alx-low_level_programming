#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocate space for 2D arrays
 * @width: the column of the array
 * @height: the row of the array
 * Return: the double pointer for the malloc
 */
int **alloc_grid(int width, int height)
{
	int **S;
	int i, j, k, m;

	if (width <= 0 || height <= 0)
		return (NULL);
	S = malloc(height * sizeof(int *));
	if (S == NULL)
	{
		free(S);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		S[i] = malloc(sizeof(int) * width);
		if (S[i] == NULL)
		{
			for (j = 0; j >= 0; j--)
				free(S[j]);
			free(S);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (m = 0; m < width; m++)
		{
			S[k][m] = 0;
		}
	}
	return (S);
}
