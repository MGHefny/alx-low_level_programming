#include "main.h"
/**
  * print_rev - rev string
  * @s:string
  */

void print_rev(char *s)
{
	int n;
	int x;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	s--
	for (x = n; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\0');
}
