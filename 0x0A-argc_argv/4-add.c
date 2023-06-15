#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that adds unsigned numbers.
 * @argc: number of arguments.
 * @argv: array of arguments inputted.
 *
 * Return:(0) success
 *
 */
int main(int argc, char *argv[])
{
int i, j;
int sum = 0;
char *flag;

if (argc <= 1)
{
printf("0\n");
return (0);
}
else
for (i = 1; i < argc; i++)
{
j = strtol(argv[i], &flag, 10);

if (*flag)
{
printf("Error\n");
return (1);
}
else
{
sum += j;
}
}
printf("%d\n", sum);

return (0);
}
