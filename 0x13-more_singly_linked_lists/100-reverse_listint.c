#include "lists.h"

/**
*reverse_listint - function that reverse a list
*@head: pointer to first node
*
*Returns: pointer to the first node in the newlist
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

*head = prev;

return (*head);
}
