#include <stdio.h>
#include "main.h"
/**
 * main - function that take the cmd line args.
 * @argc: no of args inputted.
 * @argv: array of the args inputted.
 * Return: (0) success.
 *
 */
int main(int argc, char *argv[])
{
int i;
if (argc)
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
