include "main.h"
/**
 * get_bit - return decimal number
 * @n: numb
 * @index: index bit
 * Return: value bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
	{
		return (-1);
	}

	x = (n >> index) & 1;
	return (x);
}

