#include "main.h"
/**
 * print_last_digit - Entry Point
 * @n: the last digit
 * Return: last digit
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
		n = -n;
	i = n % 10;
	if (i < 0)
		a = -a;
	_putchar(a + 48);
	return (i);
}
