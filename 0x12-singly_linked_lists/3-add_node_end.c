#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node_end - Function that adds a new node at the end.
 * of a list_t list.
 * @head: This is the head of the linked list.
 * @str: Refers to the string to store in the list.
 * Return: returns an address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode;
list_t *temp = *head;
unsigned int length = 0;

while (str[length])
length++;

newNode = malloc(sizeof(list_t));
if (newNode == NULL)
return (NULL);

newNode->str = strdup(str);
newNode->len = length;
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
return (newNode);
}
while (temp->next)
temp = temp->next;

temp->next = newNode;

return (newNode);
}
