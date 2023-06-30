#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node - function that adds a new node at the beginning
 * of a list_t list.
 * @head: refers to the head of the linked list.
 * @str: This is the string to store in the list.
 * Return: returns an address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
unsigned int length = 0;

while (str[length])
length++;

newNode = malloc(sizeof(list_t));
if (newNode == NULL)
return (NULL);

newNode->str = strdup(str);
newNode->len = length;
newNode->next = (*head);

(*head) = newNode;

return (*head);
}
