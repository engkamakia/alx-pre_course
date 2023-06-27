#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: name the function takes as argument.
 * @ptr_func: function pointer.
 *
 * Return: returns nothing.
 */
void print_name(char *name, void (*ptr_func)(char *))
{
	if (name && ptr_func)
		ptr_func(name);
}
