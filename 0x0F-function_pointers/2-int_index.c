#include "function_pointers.h"

/**
 * int_index - function to searche for an integer
 * @array: array to search from
 * @size: size of the array
 * @cmp: pointer of comparison function
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
	}

	return (-1);
}