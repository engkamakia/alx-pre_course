#include <stdlib.h>
/**
 * _strdup - function to allocate mem to arr and strcpy from str.
 * @str: string to be copied to array(arr).
 * Return: returns  a copy of array str which is arr.
 */
char *_strdup(char *str)
{
char *arr;
int i, size;
size = (sizeof(*str) / sizeof(str[0]));
arr = malloc(sizeof(*str) * size);
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
arr[i] = str[i];
return (arr);
free(arr);

}



