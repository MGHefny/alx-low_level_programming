#include "main.h"
/**
  * _atoi - str to int
  * @s: str
  * Return: int converted
  */

int _atoi(char *s)
{
	int x = 0;
	int y = 0;
	int z = 0;
	int l = 0;
	int i = 0;
	int d = 0;

	while (s[l] != '\0')
		l++;

	while (x < l && i == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			d = s[x] - '0';
			if (y % 2)
				d = -d;
			z = z * 10 + d;
			i = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			i = 0;
		}
		x++;
	}

	if (i == 0)
		return (0);

	return (z);
}
