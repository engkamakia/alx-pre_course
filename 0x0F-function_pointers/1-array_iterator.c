#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints the array elements on a new line
 * @array: The array
 * @size: no. of  elements to print
 * @action: pointer to print function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}