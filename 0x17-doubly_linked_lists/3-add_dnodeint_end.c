#include "lists.h"

/**
 * add_dnodeint_end - adds new node in end list
 * @head: head list
 * @n: value
 * Return: address new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_x;
	dlistint_t *x;

	n_x = malloc(sizeof(dlistint_t));
	if (n_x == NULL)
		return (NULL);

	n_x->n = n;
	n_x->next = NULL;
	x = *head;

	if (x != NULL)
	{
		while (x->next != NULL)
			x = x->next;
		x->next = n_x;
	}
	else
	{
		*head = n_x;
	}
	n_x->prev = x;
	return (n_x);
}

