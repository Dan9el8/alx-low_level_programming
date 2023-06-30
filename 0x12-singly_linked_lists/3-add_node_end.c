#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
*add_node_end - function that adds a new node at the end of a list
*@str: string value
*@head: double pointer to the list
*
*Return: address of new element NULL if not
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *add;
list_t *temp = *head;
unsigned int len = 0;

while (str[len])
len++;

add = malloc(sizeof(list_t));
if (!add)
return (NULL);

add->str = strdup(str);
add->len = len;
add->next = NULL;

if (*head == NULL)
{
*head = add;
return (add);
}

while (temp->next)
temp = temp->next;

temp->next = add;

return (add);
}
