# include "variadic_functions.h"
# include <stdarg.h>

/*function that returns the sum of all its parameters*/

int sum_them_all(const unsigned int n, ...)
{
    int i;
    int sum = 0;

    va_list ptr;

    if(n == 0)
        return(0);

    va_start(ptr,n);
    for (i=0;i<n;i++)
    sum += va_arg(ptr, int);

    return sum;

}

