#include"main.h"
/**
  * puts2 - prints every other character of a string
  * @str: input
  */

void puts2(char *str)
{
	int n = 0;
	int x = 0;
	int y = 0;
	char *c = str;

	while (*c != '\0')
	{
		n++;
		c++;
	}
	x = n--;
	for (y = 0; y <= x; y++)
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
