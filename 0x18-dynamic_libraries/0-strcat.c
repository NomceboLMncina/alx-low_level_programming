#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; dest[j] != '\0'; j++)
			;
		dest[j] = src[i];
	}
	return (dest);
}
