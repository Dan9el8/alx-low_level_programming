#include "lists.h"

/**
*add_nodeint_end - function that add node at the end
*@head: pointer to first element
*@n: data to insert in end
*
*Return:pointer to new node , NULL if fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end_node;
listint_t *temp = *head;

end_node = malloc(sizeof(listint_t));
if (!end_node)
return (NULL);

end_node->n = n;
end_node->next = NULL;

if (*head == NULL)
{
*head = end_node;
return (end_node);
}
while (temp->next)
temp = temp->next;

temp->next = end_node;

temp->next = end_node;

return (end_node);
}
