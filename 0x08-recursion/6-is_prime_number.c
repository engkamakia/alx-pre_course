#include "main.h"
/**
 * is_prime_number - function to check if prime or not.
 *
 *
 * @x: arg input.
 * @y: arg input
 * Return: (1)if prime, (0) if not.
 */

int prime_finder(int x, int y);

int is_prime_number(int x)
{
if (x <= 1)
return (0);
else
return (prime_finder(x, x - 1));
}
/**
 * prime_finder - function to recurse.
 * @x: arg input.
 * @y: arg input
 * Return: (1)if prime, (0) if not.
 */
int prime_finder(int x, int y)
{
if (y == 1)
return (1);
if (x % y == 0 && y > 0)
return (0);
return (prime_finder(x, y - 1));
}
