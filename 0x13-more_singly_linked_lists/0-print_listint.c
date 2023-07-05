#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a fucntion that prints elements of a node
 * @h: a pointer to the structure list_int_s
 *
 * Return: length of the list
 */
size_t print_listint(const listint_t *h)
{
const listint_t *no_des;
size_t count_no = 0;

no_des = h;
while (no_des != NULL)
{
printf("%d\n", no_des->n);
no_des = no_des->next;
count_no++;
}
return (count_no);
}
