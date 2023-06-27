#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: name that the function takes as argument.
 * @f: function pointer.
 *
 * Return: returns nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
