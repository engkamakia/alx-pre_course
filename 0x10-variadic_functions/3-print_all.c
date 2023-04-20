#include "variadic_functions.h"

/**
 * print_all -this function prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
    char *gap = "";

	va_list ptr;

	va_start(ptr, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", gap, va_arg(ptr, int));
					break;
				case 'i':
					printf("%s%d", gap, va_arg(ptr, int));
					break;
				case 'f':
					printf("%s%f", gap, va_arg(ptr, double));
					break;
				case 's':
					str = va_arg(ptr, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", gap, str);
					break;
				default:
					i++;
					continue;
			}
			gap = ", ";
			i++;
		}
	}
    va_end(ptr);

	printf("\n");
    }