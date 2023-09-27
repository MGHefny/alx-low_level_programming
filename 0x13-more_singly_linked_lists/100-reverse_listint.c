#include "lists.h"
/**
 * reverse_listint - rev linked list
 * @head: first node in list
 * Return: first in new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n = NULL;
	listint_t *p = NULL;

	while (*head)
	{
		n = (*head)->n;
		(*head)->n = p;
		p = *head;
		*head = n;
	}

	*head = p;

	return (*head);
}

