#include "main.h"
/**
 * flip_bits - count numb changed
 * @n: number 1
 * @m: number 2
 * Return: numb bits change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 0;
	int y;
	unsigned long int ex = n ^ m;
	unsigned long int cu;

	for (y = 63; y >= 0; y--)
	{
		cu = ex >> y;
		if (cu & 1)
			x++;
	}
	return (x);
}

