
#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - Prints the last half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i;
	int len;

	len = _strlen(str);
	i = len / 2;

	if (len % 2 != 0)
		i = (len - 1) / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
