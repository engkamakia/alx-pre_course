#include <stdio.h>
#include "main.h"

/**
 * main - prints the arguments it receives
 * @argc: no of arguments
 * @argv: array of the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}