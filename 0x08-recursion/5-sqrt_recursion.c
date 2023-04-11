#include "main.h"

int actual_sqrt_recursion(int n, int r);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}


int actual_sqrt_recursion(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (actual_sqrt_recursion(n, r + 1));
}
