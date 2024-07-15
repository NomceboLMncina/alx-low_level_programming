#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
int tp, a, b;

tp = 0;
b = 0;

for (a = 0; s[a] != '\0'; a++)
{
if (s[a] == ' ')
tp = 0;
else if (tp == 0)
{
tp = 1;
b++;
}
}
return (b);
}

/**
 * **strtow - splits a string into words
 * @str: string
 *
 * Return: pointer to an array of strings (Success)
 * or NULL
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int c, d = 0, oly = 0, words, a = 0, start, end;

while (*(str + oly))
oly++;
words = count_word(str);
if (words == 0)
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
for (c = 0; c <= oly; c++)
{
if (str[c] == ' ' || str[c] == '\0')
{
if (a)
{
end = c;
tmp = (char *) malloc(sizeof(char) * (a + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[d] = tmp - a;
d++;
a = 0;
}
}
else if (a++ == 0)
start = c;
}
matrix[d] = NULL;
return (matrix);
}
