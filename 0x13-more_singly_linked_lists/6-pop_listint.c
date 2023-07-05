#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - A function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to the head of the list.
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
listint_t *h, *current_node;
int node_data;

if (*head == NULL)
return (0);

current_node = *head;

node_data = current_node->n;

h = current_node->next;

free(current_node);

*head = h;

return (node_data);
}
