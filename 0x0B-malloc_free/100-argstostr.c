#include <stdlib.h>
#include "main.h"
/**
 * argstostr - arguments to string
 * @ac: the argument count
 * @av: the arguments through command line
 * Return: the pointer of allocated space
 */
char *argstostr(int ac, char **av)
{
	int i, j = 0, k = 0, l = 0;
	char *W;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			l++;
			j++;
		}
		j = 0;
	}
	W = malloc(ac + 1 + (sizeof(char) * l));
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			W[k] = av[i][j];
			k++;
			j++;
		}
		W[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	W[k] = '\0';
	return (W);
}
