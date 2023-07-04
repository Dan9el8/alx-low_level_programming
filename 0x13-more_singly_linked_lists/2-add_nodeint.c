#include "lists.h"

/**
*add_nodeint - function that add node at the beginning
*@head: pointer to the first node
*@n: data for new node
*
*Return: pointer to new node NULL if fail
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *n_node;

n_node = malloc(sizeof(listint_t));
if (!n_node)
return (NULL);

n_node->n = n;
n_node->next = *head;
*head = n_node;

return (n_node);
}
