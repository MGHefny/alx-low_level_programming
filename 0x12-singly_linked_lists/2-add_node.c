#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - new node beginning linked list
 * @head: double list_t list
 * @str: str add in node
 * Return: address ele or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	wen = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = n;

	return (*head);
}

