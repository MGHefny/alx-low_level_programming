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
	unsigned int l = 0;
	
	while (str[l])
		l++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->l = l;
	new->next = (*head);
	(*head) = new;
	return (*head);
}

