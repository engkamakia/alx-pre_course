#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - A function that deletes the head node of
 * a linked list.
 * @head: head of a list.
 *
 * Return: head node's data(n).
 */
int pop_listint(listint_t **head)
{
listint_t *current_node = *head;
int node_data;

if (*head != NULL)
return (0);
node_data = (*head)->n;
current_node = (*head)->next;
free(current_node);
return (node_data);
}
