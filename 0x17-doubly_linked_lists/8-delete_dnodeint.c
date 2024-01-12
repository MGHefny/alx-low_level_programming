#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node
 * @head: head list
 * @index: new node
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *x1;
	dlistint_t *x2;
	unsigned int y;

	x1 = *head;
	if (x1 != NULL)
		while (x1->prev != NULL)
			x1 = x1->prev;

	y = 0;
	while (x1 != NULL)
	{
		if (y == index)
		{
			if (y == 0)
			{
				*head = x1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				x2->next = x1->next;

				if (x1->next != NULL)
					x1->next->prev = x2;
			}
			free(x1);
			return (1);
		}
		x2 = x1;
		x1 = x1->next;
		y++;
	}
	return (-1);
}
