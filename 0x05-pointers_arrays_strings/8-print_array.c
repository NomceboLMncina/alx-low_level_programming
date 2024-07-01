
#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the elements of an array
 * @a: array
 * @n: number of elements to print in array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

