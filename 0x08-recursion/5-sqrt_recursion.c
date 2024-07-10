
#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number to calculate the natural square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the natural sqaure root of
 * @b: iterator
 *
 * Return: the natural square root
 */
int actual_sqrt_recursion(int n, int b)
{
if (b * b > n)
return (-1);
if (b * b == n)
return (b);
return (actual_sqrt_recursion(n, b + 1));
}

