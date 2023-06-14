#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to allocate mem to arr and initialize it.
 * @size: length of the array.
 * @c:characters to initialize the arr.
 * Return: return array(arr) filled with characters(c).
 *
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
arr = malloc(size * sizeof(*arr));

if (size == 0 || arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = c;
return (arr);

}
