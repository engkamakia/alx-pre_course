#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that take the cmd line args.
 * @argc: no of args inputted.
 * @argv: array of the args inputted.
  *
 *
 * Return: (0) success.
 */
int main(int argc, char *argv[])
{
char *opcodes = (char *) main;
int index, nb;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

nb = atoi(argv[1]);

if (nb < 0)
{
printf("Error\n");
exit(2);
}

for (index = 0; index < nb; index++)
{
printf("%02x", opcodes[index] & 0xFF);
if (index != nb - 1)
printf(" ");
}

printf("\n");
return (0);
}
