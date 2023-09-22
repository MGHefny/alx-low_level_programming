#include <stdlib.h>
#include "lists.h"
/**
 * list_len - numb linked list
 * @h: list_t list
 * Return: numb element of h
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}

