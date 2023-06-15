#include <stdio.h>
#include "main.h"

/**
 * main - function that takes cmdline args.
 * @argc: no of args.
 * @argv: array of args:
 * Return: returns(0) success.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
