#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: character to be inputted.
 *
 * Return: returns a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
int *p;

p = malloc(b);
if (!p)
{
exit(98);
}
else
return (p);
}
