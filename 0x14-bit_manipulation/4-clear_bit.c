#include "main.h"
/**
 * clear_bit - given bit to 0
 * @index: bit to clear
 * @n: pointer
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1 << index) & *n);
	return (1);
}

