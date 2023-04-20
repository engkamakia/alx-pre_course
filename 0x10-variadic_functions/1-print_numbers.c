#include "variadic_functions.h"

/**
 * print_numbers -function that  prints numbers given as parameters
 * @separator: string to seperate the numbers
 * @n: number of integers passed as arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list ptr;

	va_start(ptr, n);

	for (index = 0; index < n; index++)
	{
		if (!separator)
			printf("%d", va_arg(ptr, int));
		else if (separator && index == 0)
			printf("%d", va_arg(ptr, int));
		else
			printf("%s%d", separator, va_arg(ptr, int));
	}

	va_end(ptr);

	printf("\n");
}