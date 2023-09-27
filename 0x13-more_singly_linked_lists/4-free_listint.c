#include "lists.h"
/**
 * free_listint - free linked list
 * @head: list is freed
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		head = t;
		free(head);
	}
}

