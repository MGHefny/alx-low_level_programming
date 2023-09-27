#include "lists.h"
/**
 * add_nodeint - adds node of beginn linked list
 * @head: pointer first node
 * @n: data in new node
 * Return: new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x)
	{
		return (NULL);
	}
		x->n = n;
		x->next = *head;
		*head = x;

	return (x);
}

