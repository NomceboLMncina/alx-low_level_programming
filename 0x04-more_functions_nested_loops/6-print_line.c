#include "main.h"
/**
 * print_line - prints a straight line
 * @n: A number that specifies the number of time _ should be printed out
 * Return: 0 success
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
