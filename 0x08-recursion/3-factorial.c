#include "main.h"

/**
 * factorial - function to return the factorial of a given number.
 * @n:number to be used as input
 * Return: Returns factorial of the given number
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
return (n * factorial(n - 1));
}
