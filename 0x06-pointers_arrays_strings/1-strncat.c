#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: the number of bytes to copy to dest from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		for (j = 0; dest[j] != '\0'; j++)
			;
		dest[j] = src[i];
		i++;
	}

	return (dest);
}
