#include <stdlib.h>
/**
 * str_concat - function to concatnate s1 and s2.
 * @s1: The first string.
 * @s2: The second string.
 * Return:conc which is a concatnation of s1 and s2.
 * NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
int a, b, i, j, c;
char *conc;

a = b = 0;

if (s1 != NULL)
{
i = 0;
while (s1[i++] != '\0')
a++;
}

if (s2 != NULL)
{
i = 0;
while (s2[i++] != '\0')
b++;
}

c = a + b;
conc = malloc(sizeof(char) * (c + 1));
if (conc == NULL)
return (NULL);

for (i = 0; i < a; i++)
conc[i] = s1[i];
for (j = 0; j < b; j++, i++)
conc[i] = s2[j];
conc[c] = '\0';

return (conc);
}
