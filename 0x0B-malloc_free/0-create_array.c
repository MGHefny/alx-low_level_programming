#include "main.h"
#include <stdlib.h>
/**
 * create_array - arr  size size and assign char c
 * @size: size arr
 * @c: convert char to assign
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *strng;
	unsigned int x;

	strng = malloc(sizeof(char) * size);
	if (size == 0 || strng == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		strng[x] = c;
	return (strng);
}
