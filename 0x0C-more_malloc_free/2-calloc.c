#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of each element.
 * Return: (Null) error or pointer to allocated memory(success).
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i;

if (nmemb <= 0 || size <= 0)
return (NULL);

arr = malloc(nmemb * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
arr[i] = 0;

return (arr);
}

