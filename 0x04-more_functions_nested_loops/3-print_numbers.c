#include "main.h"

/**
 * print_numbers - number 0-9
 * return: function
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}