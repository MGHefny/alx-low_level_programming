#include "lists.h"
/**
 * get_nodeint_at_index - node certain in linked list
 * @head: first node
 * @index: node return
 * Return: fined or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t = head;
	unsigned int x = 0;

	while (t && x < index)
	{
		t = t->next;
		x++;
	}

	return (t ? t : NULL);
}

