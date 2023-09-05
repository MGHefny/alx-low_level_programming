#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main function
 * @ac: input
 * @av: double pointer arr
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int x, y;
	int z = 0;
	int  i = 0;
	char *st;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			z++;
	}
	z += ac;

	st = malloc(sizeof(char) * z + 1);
	if (st == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
		st[i] = av[x][y];
		i++;
	}
	if (st[i] == '\0')
	{
		st[i++] = '\n';
	}
	}
	return (st);
}
