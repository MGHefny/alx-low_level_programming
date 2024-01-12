#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node and possition
 * @h: x list
 * @idx:  new node
 * @n: value
 * Return: address nww node or failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_x;
	dlistint_t *x;
	unsigned int y;

	n_x = NULL;
	if (idx == 0)
		n_x = add_dnodeint(h, n);
	else
	{
		x = *h;
		y = 1;
		if (x != NULL)
			while (x->prev != NULL)
				x = x->prev;
		while (x != NULL)
		{
			if (y == idx)
			{
				if (x->next == NULL)
					n_x = add_dnodeint_end(h, n);
				else
				{
					n_x = malloc(sizeof(dlistint_t));
					if (n_x != NULL)
					{
						n_x->n = n;
						n_x->next = x->next;
						n_x->prev = x;
						x->next->prev = n_x;
						x->next = n_x;
					}
				}
				break;
			}
			x = x->next;
			y++;
		}
	}
	return (n_x);
}
