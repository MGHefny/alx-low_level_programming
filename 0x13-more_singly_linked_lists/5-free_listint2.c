#include "lists.h"
/**
 * free_listint2 - free linked list
 * @head: linked list is free
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}
	if (head == NULL)
	{
		return;
	}

	*head = NULL;
}

