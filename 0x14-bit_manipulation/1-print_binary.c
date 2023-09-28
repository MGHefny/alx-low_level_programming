#include "main.h"
/**
 * print_binary - print decimal number
 * @n: numbe binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int c;
	int x;
	int n = 0;

	for (x = 63; x >= 0; x--)
	{
		c = n >> x;

		if (c & 1)
		{
			_putchar('1');
			n++;
		}
		else if (n)
			_putchar('0');
	}
	if (!n)
	{
		_putchar('0');
	}
}

