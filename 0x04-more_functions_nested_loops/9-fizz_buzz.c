#include "main.h"
#include <stdio.h>

/**
 * main - prints the number 1 through 100,
 * but for multiples of 3 it prints Fizz,
 * then for multiple of 5 it prints Buzz,
 * lastly for multiple of both 3 and 5 it prints FizzBuzz
 * Return: 0 success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
