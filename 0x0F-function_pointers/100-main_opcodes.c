#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes 
 * @a: 
 * @b: 
 *
 * Return: void
 */
void print_opcodes(char *a, int b)
{
	int c;

	for (c = 0; c < b; c++)
	{
		printf("%.2hhx", a[c]);
		if (c < b - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - 
 * @argc: 
 * @argv: 
 *
 * Return: O
 */
int main(int argc, char **argv)
{
	int d;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	d = atoi(argv[1]);
	if (d < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, d);
	return (0);
}