#include <stdlib.h>
#include "main.h"
/**
 * *_memset - memory constant byte
 * @s: memory arr
 * @b: char 
 * @n: times of copy 
 * Return: pointer  memory arr
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory array
 * @nmemb: number elements array
 * @size: size element
 * Return: pointer to  memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
