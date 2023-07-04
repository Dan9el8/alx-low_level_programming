#include "lists.h"

/**
*get_nodeint_at_index - function that returns node at certain index
*@head: first node in the list
*@index: index of node to return
*
*Return: pointer to the node, NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int n = 0;
listint_t *temp = head;

while (temp && n < index)
{
temp = temp->next;
n++;
}

return (temp ? temp : NULL);
}
