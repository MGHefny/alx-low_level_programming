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
 list_t *n;
 unsigned int l = 0;

 while (str[l])
 l++;

 n = malloc(sizeof(list_t));
 if (!n)
 return (NULL);

 n->str = strdup(str);
 n->l = l;
 n->next = (*head);
 (*head) = n;

 return (*head);
}

