#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints largest prime in 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	long int x;
	long int m;
	long int y;

	x = 612852475143;
	max = -1;

	while (x % 2 == 0)
	{
		m = 2;
		x /= 2;
	}

	for (y = 3; y <= sqrt(x); y = y + 2)
	{
		while (x % y == 0)
		{
			m = y;
			x = x / y;
		}
	}

	if (x > 2)
		m = x;

	printf("%ld\n", m);

	return (0);
}
