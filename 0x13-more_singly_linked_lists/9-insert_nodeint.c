#include "lists.h"
/**
 * insert_nodeint_at_index - insert x ele postiev 
 * @head: first node
 * @n: data new node
 * @idx: index node add
 * Return: new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *nw;
	listint_t *t = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw || !head)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}

	for (x = 0; t && x < idx; x++)
	{
		if (x == idx - 1)
		{
			nw->next = t->next;
			t->next = nw;
			return (nw);
		}
		else
			t = t->next;
	}

	return (NULL);
}

