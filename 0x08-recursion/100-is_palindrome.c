
#include "main.h"

int check_pal(char *s, int a, int b);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checking palindrome string
 * @s: string to reverse
 *
 * Return: 1 if yes, if not 0
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of the string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @a: iterator
 * @b: length of the string
 *
 * Return: 1 when palindrome, if not 0
 */
int check_pal(char *s, int a, int b)
{
if (*(s + a) != *(s + b - 1))
return (0);
if (a >= b)
return (1);
return (check_pal(s, a + 1, b - 1));
}

