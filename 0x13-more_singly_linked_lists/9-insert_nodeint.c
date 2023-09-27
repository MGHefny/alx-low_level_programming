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
	listint_t *new;
	listint_t *t = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (x = 0; t && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = t->next;
			t->next = new;
			return (new);
		}
		else
			t = t->next;
	}

	return (NULL);
}

