#include "variadic_functions.h"

/**
 * print_strings - function that Prints strings separated by the separators.
 * @separator: A string used to separate the strings.
 * @n: number of arguments passed to the function.
 * Return: (0) success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int index;
	va_list pointa;

	va_start(pointa, n);
	if (separator == NULL)
		separator = "";

	for (index = 0; index < n; index++)
	{
		str = va_arg(pointa, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (index < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pointa);
}
