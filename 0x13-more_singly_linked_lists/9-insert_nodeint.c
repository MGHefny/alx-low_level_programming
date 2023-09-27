#include "lists.h"
/**
 * insert_nodeint_at_index - insert x ele postiive
 * @head: first node
 * @n: data new node
 * @idx: index node add
 * Return: new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *y;
	listint_t *t = *head;

	y = malloc(sizeof(listint_t));
	if (!y || !head)
		return (NULL);

	y->n = n;
	y->next = NULL;

	if (idx == 0)
	{
		y->next = *head;
		*head = y;
		return (y);
	}

	for (x = 0; x && t < idx; x++)
	{
		if (x == idx - 1)
		{
			y->next = t->next;
			t->next = y;
			return (y);
		}
		else
			t = t->next;
	}

	return (NULL);
}

