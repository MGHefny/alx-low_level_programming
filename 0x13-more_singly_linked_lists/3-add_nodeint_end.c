#include "lists.h"
/**
 * add_nodeint_end - node in end linked list
 * @n: data to insert in the new element
 * @head: pointer first ele
 * Return:  new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t = *head;
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}

	while (t->next)
		t = t->next;

	t->next = x;

	return (x);
}

