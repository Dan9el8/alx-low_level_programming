#include "lists.h"

/**
*print_list - function that prints all elements in a list
*@h: to print listint_t
*
*Return: nodes
*/

size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
