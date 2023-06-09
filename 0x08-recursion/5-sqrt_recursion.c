#include "main.h"
/**
 *_sqrt - function to find the square root using x and y.
 *
 *
 *@x: square of int y.
 *@y: square root of int x.
 *Return: -1 if x has no natural sqrt.
 */
int _sqrt(int x, int y)
{
/*int y = 1;*/
if (y * y == x)
{
return (y);
}
else if (y * y > x)
{
return (-1);
}
else
return (_sqrt(x, y + 1));

}
/**
 *_sqrt_recursion - function to find sqrt of n.
 *@n:number we will try to see if it has a sqrt or not.
 * Return: sqrt of n if it has and -1 if it has no sqrt.
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
