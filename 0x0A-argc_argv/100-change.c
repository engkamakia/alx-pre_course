#include <stdlib.h>
#include <stdio.h>
/**
 *main - function that prints the minimum change.
 * @argc: number of arguments inputted.
 * @argv: array of arguments inputted.
 *
 * Return:(0)Success and (1)Error
 *
 */
int main(int argc, char *argv[])
{
int i, j, k;
int cents[] = {25, 10, 5, 2, 1};

if (argc <= 1)
{
printf("Error\n");
return (1);
}

i = atoi(argv[1]);
k = 0;

if (i < 0)
{
printf("0\n");
return (0);
}

for (j = 0; j < 5 && i >= 0; j++)
{
while (i >= cents[j])
{
k++;
i -= cents[j];
}
}

printf("%d\n", k);
return (0);
}
