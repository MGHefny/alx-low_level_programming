#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends for input and add size
 * @s1: input
 * @s2: input
 * Return: concat s1, s2
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int x, cx;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = cx = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[cx] != '\0')
		cx++;
	con = malloc(sizeof(char) * (x + cx + 1));

	if (con == NULL)
		return (NULL);
	x = cx = 0;
	while (s1[x] != '\0')
	{
		con[x] = s1[x];
		x++;
	}

	while (s2[cx] != '\0')
	{
		con[x] = s2[cx];
		x++, cx++;
	}
	con[x] = '\0';
	return (con);
}
