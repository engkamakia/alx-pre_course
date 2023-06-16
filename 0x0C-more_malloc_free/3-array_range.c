#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: refers to the minimum value.
 * @max: refers to the maximum value.
 *
 * Return: returns a pointer to the array.
 */
int *array_range(int min, int max)
{
int *arr, i, diff;
if (min > max)
return (NULL);

diff = max - min;
arr = malloc(sizeof(int) * (diff + 1));
if (!arr)
return (NULL);

for (i = 0; i <= diff; i++)
arr[i] = min + i;

return (arr);
}

