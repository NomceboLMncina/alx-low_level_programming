
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, initializes with a specific char
 * @size: size of array
 * @c: char to assign
 * Description: creat array and assign char c
 * Return: pointer to array, NULL if fails
 *
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int o;

str = malloc(sizeof(char) * size);

if (size == 0 || str == NULL)
return (NULL);

for (o = 0; o < size; o++)
str[o] = c;
return (str);
}

