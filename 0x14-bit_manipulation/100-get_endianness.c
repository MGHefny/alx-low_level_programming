#include "main.h"
/**
 * get_endianness - checks endian
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	return (*y);
}

