#include "main.h"
/**
 * print_binary - print decimal number
 * @n: numbe binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int c;
	int x;
	int cn = 0;

	for (x = 63; x >= 0; x--)
	{
		c = n >> x;

		if (c & 1)
		{
			_putchar('1');
			n++;
		}
		else if (cn)
			_putchar('0');
	}
	if (!cn)
	{
		_putchar('0');
	}
}

