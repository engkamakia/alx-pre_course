#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter.
 * @array: array of integers used as input.
 * @size: size of the array.
 * @action: pointer pointing to the function.
 *
 * Return: returns nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int index;

if (array && action)
for (index = 0; index < size; index++)
action(array[index]);
}
