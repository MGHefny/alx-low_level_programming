#include "main.h"
/**
 * get_endianness - checks endian
 * Return: 0 or 1
 */
int get_endianness(void)
{
	char *y = (char *) &x;
	unsigned int x = 1;

	return (*y);
}

