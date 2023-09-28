#include "main.h"
/**
 * set_bit - sets index to 1
 * @index: index to set to 1
 * @n: pointer
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned int x = 1;

	if (index > 63)
	{
		return (-1);
	}
	*n = ((x << index) | *n);
	return (1);
}

