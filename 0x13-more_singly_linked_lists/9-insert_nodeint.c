#include "lists.h"

/**
 * insert_nodeint_at_index - insert x ele postive
 * @head: first node
 * @n: data new node
 * @idx: index node add
 * Return: new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *x;
	listint_t *t = *head;
	unsigned int y;

	x = malloc(sizeof(listint_t));
	if (!x || !head)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (idx == 0)
	{
		x->next = *head;
		*head = x;
		return (x);
	}

	for (y = 0; y && t < idx; y++)
	{
		if (y == idx - 1)
		{
			x->next = t->next;
			t->next = x;
			return (x);
		}
		else
			t = t->next;
	}

	return (NULL);
}

