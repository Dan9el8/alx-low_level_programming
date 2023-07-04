#include "lists.h"

/**
*listint_len - function that returns number of elements in a list
*@h: list type to transverse
*
*Return: nodes
*/

size_t listint_len(const listint_t *h)
{
size_t n = 0;

while (h)
{
n++;
h = h->next;
}
return (n);
}
