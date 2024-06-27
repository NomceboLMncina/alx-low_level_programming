#include "main.h"
/**
 * print_triangle - prints a triangle in the terminal
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		k = size;
		while (k > i)
		{
			_putchar(' ');
			k--;
		}
		for (j = 0; j < i; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
