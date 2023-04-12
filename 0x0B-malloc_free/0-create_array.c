#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char 
 * @size: The size of the array
 * @c: char to fill array
 * Return: return a full array,Null if Null
 *
 **/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}