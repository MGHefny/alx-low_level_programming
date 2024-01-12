#include "lists.h"
/**
 * add_dnodeint - add node in beginning
 * @head: head list
 * @n: value
 * Return: address n_x element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_x;
	dlistint_t *x;

	n_x = malloc(sizeof(dlistint_t));
	if (n_x == NULL)
		return (NULL);

	n_x->n = n;
	n_x->prev = NULL;
	x = *head;

	if (x != NULL)
	{
		while (x->prev != NULL)
			x = x->prev;
	}

	n_x->next = x;

	if (x != NULL)
		x->prev = n_x;

	*head = n_x;
	return (n_x);
}
