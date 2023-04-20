# include "variadic_functions.h"


/**
 * sum_them_all -function that returns the sum of all its parameters
 * @n: number of paramters passed to the function.
 * @...: ellipsis
 *
 * Return: If n == 0 - 0.
 */

int sum_them_all(const unsigned int n, ...)
{
    unsigned int i;
    int sum = 0;
    /**
     * declaring a pointer to the
     * argument list
    */

    va_list ptr;

    /**
     * initializing argument to the
     * list pointer
     *
     */

    if (n == 0)
    return (0);

    va_start(ptr, n);
    for (i = 0; i < n; i++)

    /**
     * accessing current variable
     * and pointing to the next one
    */
    sum += va_arg(ptr, int);

    /*ending argument list traversal*/
    va_end(ptr);

    return (sum);

}