#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function that prints the minimum number of coins to
 * make change 
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int a, b, count;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	count = 0;

	if (a < 0)
	{
		printf("0\n");
		return (0);
	}

	for (b = 0; b < 5 && a >= 0; b++)
	{
		while (a >= cents[b])
		{
			count++;
			a -= cents[b];
		}
	}

	printf("%d\n", count);
	return (0);
}