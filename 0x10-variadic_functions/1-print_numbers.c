#include "variadic_functions.h"

/**
 * print_numbers -function that  prints numbers given as parameters.
 * @separator: string that seperates the numbers.
 * @n: number of unsigned integers that are passed as arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list pointa;

	va_start(pointa, n);

	for (a = 0; a < n; a++)
	{
		if (!separator)
			printf("%d", va_arg(pointa, int));
		else if (separator && a == 0)
			printf("%d", va_arg(pointa, int));
		else
			printf("%s%d", separator, va_arg(pointa, int));
	}

	va_end(pointa);

	printf("\n");
}
