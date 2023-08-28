#include "main.h"
/**
 *_memcpy - main function
 *@dest: pointer
 *@src: pointer
 *@n: numb
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x, y;

	y = n;

	for (x = 0; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
