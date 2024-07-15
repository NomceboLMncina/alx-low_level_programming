
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  function returns a pointer to the duplicated string
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *aaa;
int a, b = 0;

if (str == NULL)
return (NULL);
a = 0;

while (str[a] != '\0')
a++;

aaa = malloc(sizeof(char) * (a + 1));

if (aaa == NULL)
return (NULL);
for (b = 0; str[b]; b++)
aaa[b] = str[b];
return (aaa);
}
