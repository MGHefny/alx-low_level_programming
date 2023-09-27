#include "lists.h"
/**
 * print_listint - print elem of linked list
 * @h: type list to print
 * Return: num nod
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}

