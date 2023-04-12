#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - This function concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 *
 * Return: a pointer to the space allocated in memory 
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, m;
	char *result;

	k = l = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			k++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			l++;
	}

	m = k + l;
	result = (char *)malloc(sizeof(char) * (m + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < k; i++)
		result[i] = s1[i];
	for (j = 0; j < l; j++, i++)
		result[i] = s2[j];
	result[m] = '\0';

	return (result);
}