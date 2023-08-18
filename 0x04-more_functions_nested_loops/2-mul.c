#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;

	c = 48;
	printf("%c: %d\n", c, _isdigit(c));
	c = 97;
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
