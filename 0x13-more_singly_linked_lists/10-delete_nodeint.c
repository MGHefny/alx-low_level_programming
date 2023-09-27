#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node in linked list
 * @head: first ele in list
 * @index: node  delete
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *crr = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}

	while (x < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		x++;
	}


	crr = t->next;
	t->next = crr->next;
	free(crr);

	return (1);
}

