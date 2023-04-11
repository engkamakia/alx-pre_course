# include "main.h"

int _strlen_recursion(char *s)
{
	int num = 0;

	if (*s)
	{
		num++;
		num += _strlen_recursion(s + 1);
	}

	return (num);
}
