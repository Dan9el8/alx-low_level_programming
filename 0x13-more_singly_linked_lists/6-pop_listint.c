#include "lists.h"

/**
*pop_listint - function that deletes head node of a list
*@head: pointer to first element in list
*
*Return: deleted data
*/

int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
