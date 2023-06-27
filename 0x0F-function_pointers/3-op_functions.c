#include "3-calc.h"

/**
 * op_add - A function that returns a sum of two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: sum of the two integers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function that returns a difference of two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: difference of the two integers.
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - A function that returns a multiple of two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: multiplication.
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - A function that returns a division of two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: division.
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod A function that returns a modulus of two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: remainder of the division.
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
