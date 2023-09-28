#include "main.h"
/**
 * binary_to_uint - convert binary
 * @b: string to binary
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int x;

	if (!b)
	{
		return (0);
	}
	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		n = 2 * n + (b[x] - '0');
	}

	return (n);
}

