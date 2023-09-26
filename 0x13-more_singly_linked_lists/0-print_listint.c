#include "lists.h"
/**
 * print_listint - print elem of linked list
 * @h: type list to print
 * Return: num nod
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;
//	int x;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}

