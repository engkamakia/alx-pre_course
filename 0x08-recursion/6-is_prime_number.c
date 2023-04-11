#include "main.h"

int prime(int n, int r);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

int prime(int n, int r)
{
	if (r == 1)
		return (1);
	if (n % r == 0 && r > 0)
		return (0);
	return (prime(n, r - 1));
}
