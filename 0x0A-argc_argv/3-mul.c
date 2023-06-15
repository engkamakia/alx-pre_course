#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that multiplies two numbers.
 * @argc: numer of arguments.
 * @argv: array of arguments.
 *
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
int i;
int mul = 1;

if (argc < 2)
{
printf("error\n");
return (1);
}
else
for (i = 1; i < argc; i++)
{
mul *= atoi(argv[i]);
}
printf("%d\n", mul);

return (0);
}
