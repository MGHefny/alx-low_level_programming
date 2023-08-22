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

	while (*str != '\0')
	{
		n++;
		str++;
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
