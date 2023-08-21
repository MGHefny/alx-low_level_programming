#include "main.h"

/**
  * _put - print string
  * @str: input string
  */

void _put(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
