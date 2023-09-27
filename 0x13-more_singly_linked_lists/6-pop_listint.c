#include "lists.h"
/**
 * pop_listint - delete head node in linked list
 * @head: pointer first eleme linked list
 * Return: ele was dele or empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!head || !*head)
	{
		return (0);
	}

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}

