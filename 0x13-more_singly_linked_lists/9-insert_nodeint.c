#include "lists.h"

/**
*insret_nodeint_at_index - function that insert new node at certain pos
*@head: pointer to first node
*@idx: index wherenode added
*@n: data to new node
*
*Return: pointer to new node, NULL if not
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *in_node;
listint_t *temp = *head;

in_node = malloc(sizeof(listint_t));
if (!in_node || !head)
return (NULL);

in_node->n = n;
in_node->next = NULL;

if (idx == 0)
{
in_node->next = *head;
*head = in_node;
return (in_node);
}

for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
in_node->next = temp->next;
temp->next = in_node;
return (in_node);
}
else
temp = temp->next;
}
return (NULL);
}
