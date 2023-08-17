#include "lists.h"

/**
*get_dnodeint_at_index - function that returns nth node in al list
*@head: head of list
*@index: index of node
*
*Return: nth node
**/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int size;
dlistint_t *tmp;

size = 0;
if (head == NULL)
return (NULL);

tmp = head;
while (tmp)
{
if (index == size)
return (tmp);
size++;
tmp = tmp->next;
}
return (NULL);
}
