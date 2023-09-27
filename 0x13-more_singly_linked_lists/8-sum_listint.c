#include "lists.h"
/**
 * sum_listint - sum data in linked list
 * @head: first node
 * Return: resulting of thesum
 */
int sum_listint(listint_t *head)
{
	listint_t *t = head;
	int s = 0;

	while (t)
	{
		s += t->n;
		t = t->next;
	}

	return (s);
}

