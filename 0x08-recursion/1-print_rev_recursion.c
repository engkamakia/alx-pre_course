#include "main.h"

/**
 * _print_rev_recursion - function to print a string in reverse
 * _putchar - writes the character c to stdout
 * @s:string to be passed to the _puts_recursion function
 *
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
