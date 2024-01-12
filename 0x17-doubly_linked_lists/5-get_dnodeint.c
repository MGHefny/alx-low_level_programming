#include "lists.h"

/**
 * get_dnodeint_at_index - return node linked list
 * @head: head list
 * @index: node search for
 * Return: node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int s;
	dlistint_t *t;

	s = 0;
	if (head == NULL)
	return (NULL);
	t = head;
	while (t)
	{
	if (index == s)
	return (t);
	s++;
	t = t->next;
	}
	return (NULL);
}
