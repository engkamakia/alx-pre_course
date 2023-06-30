# include <stdio.h>
#include "lists.h"

/**
 * print_list - A function that Prints all the elements of a list_t list.
 * @h: the singly list_t list.
 *
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
size_t element = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
element++;
}
return (element);
}
