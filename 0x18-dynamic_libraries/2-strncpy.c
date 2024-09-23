#include "main.h"

/**
 * _strncpy - copies a strings
 * @dest: destination i.e where to copy the string
 * @src: the string to copy
 * @n: the number of bytes to copy to dest from src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
