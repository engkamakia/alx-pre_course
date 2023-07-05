#include "lists.h"
/**
 * listint_len - A function that returns the len  number of elements in a linked.
 * @h: pointer to the node structure.
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
size_t count_no = 0;

while (h != NULL)
{
h = h->next;
count_no++;
}
return (count_no);
}
