#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of integers used as input.
 * @size: number of elements in the array array.
 * @cmp: pointer pointing to the function to be used to compare values.
 *
 * Return: index of the first element for which the cmp
 * function does not return 0. If no elements matches,
 * return -1 and If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index;

if (array && cmp)
{
if (size <= 0)
return (-1);

for (index = 0; index < size; index++)
if (cmp(array[index]))
return (index);
}

return (-1);
}
