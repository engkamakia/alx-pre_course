#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - A function that frees a linked list.
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
listint_t *current_node;

if (head == NULL)
return;

while (*head)
{
current_node = *head;
*head = (*head)->next;
free(current_node);
}

}
