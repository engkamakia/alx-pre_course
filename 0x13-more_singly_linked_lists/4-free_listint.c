 #include <stdlib.h>
 #include "lists.h"

/**
 * free_listint - A function that frees a linked list.
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
