#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 *
 *_putchar - writes the character c to stdout
 * *s - string to be passed to the _puts_recursion function
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}