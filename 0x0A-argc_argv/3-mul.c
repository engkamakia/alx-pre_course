#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - function that multiplies two numbers.
 * @argc: numer of arguments.
 * @argv: array of arguments.
 *
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
int mul, x, y;


if (argc < 2)
{
printf("error\n");
return (1);
}
else

x = atoi(argv[1]);
y = atoi(argv[2]);
mul = x *y;

printf("%d\n", mul);

return (0);
}
