#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - node in end linked list
 * @head: double list_t list
 * @str: str in the new node
 * Return: address ele or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new;
    list_t *temp = *head;
    unsigned int len = 0;

    while (str[len])
    len++;

    new = malloc(sizeof(list_t));

    if (!new)
    return (NULL);

    new->str = strdup(str);
    new->len = l;
    new->next = NULL;

    if (*head == NULL)
    {
        *head = new;
        return (new);
        }
        while (temp->next)
        temp = temp->next;
        temp->next = new;
        return (new);
        }
}
