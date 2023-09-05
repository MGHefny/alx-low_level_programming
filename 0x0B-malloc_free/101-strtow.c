#include <stdlib.h>
#include "main.h"

/**
 * count_word - function need it 
 * @s: string value
 *
 * Return: number of words
 * **strtow - string into words
 * @str: string > split
 *
 * Return: pointer arr of (Success)
 * or (Error)
 */
int count_word(char *s)
{
	int fl, x, y;

	fl = 0;
	y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			fl = 0;
		else if (fl == 0)
		{
			fl = 1;
			y++;
		}
	}

	return (y);
}
char **strtow(char *str)
{
	char **mat, *tmp;
	int x, word, st, end;
	int y = 0;
	int len = 0;
	int z = 0;

	while (*(str + len))
		len++;
	word = count_word(str);
	if (word == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (word + 1));
	if (mat == NULL)
		return (NULL);

	for (x = 0; x <= len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (z)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (z + 1));
				if (tmp == NULL)
					return (NULL);
				while (st < end)
					*tmp++ = str[st++];
				*tmp = '\0';
				mat[y] = tmp - z;
				y++;
				z = 0;
			}
		}
		else if (z++ == 0)
			st = x;
	}

	mat[y] = NULL;

	return (mat);
}
