#include "main.h"

/**
 * _strlen_recursion - function to return the length of a string.
 * _putchar - writes the character c to stdout.
 * s - string to be passed to the _puts_recursion function.
 *
 */
int _strlen_recursion(char *s)
{
int count = 0;
if (*s)
{
count += _strlen_recursion(s + 1);
count++;
}
return (count);
}
