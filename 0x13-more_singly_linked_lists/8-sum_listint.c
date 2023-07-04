#include "lists.h"

/**
*sum_listint - function that calculates all data ni a list
*@head: first node in a list
*
*Return: sum
*/

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
