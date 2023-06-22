#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
int index = 0;
char *str;
char *gap = "";

va_list pointa;

va_start(pointa, format);

if (format)
{
while (format[index])
{
switch (format[index])
{
case 'c':
printf("%s%c", gap, va_arg(pointa, int));
break;
case 'i':
printf("%s%d", gap, va_arg(pointa, int));
break;
case 'f':
printf("%s%f", gap, va_arg(pointa, double));
break;
case 's':
str = va_arg(pointa, char *);
if (!str)
str = "(nil)";
printf("%s%s", gap, str);
break;
default:
index++;
continue;
}
gap = ", ";
index++;
}
}
va_end(pointa);

printf("\n");
}
