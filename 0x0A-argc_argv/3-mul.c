
#include <stdio.h>
#include "main.h"

/**
 * _std - integer
 * @s: string to be converted
 *
 * Return: int converte
 */
int _std(char *s)
{
int a, b, c, d, e, f;

a = 0;
b = 0;
c = 0;
d = 0;
e = 0;
f = 0;


while (s[d] != '\0')
d++;

while (a < d && e == 0)
{
if (s[a] == '-')
++b;

if (s[a] >= '0' && s[a] <= '9')
{
f = s[a] - '0';

if (b % 2)
f = -f;

c = c * 10 + f;

e = 1;

if (s[a + 1] < '0' || s[a + 1] > '9')

break;
e = 0;
}
a++;
}
if (e == 0)
return (0);
return (c);
}


/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int result, mult1, mult2;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

mult1 = _std(argv[1]);
mult2 = _std(argv[2]);
result = mult1 *mult2;

printf("%d\n", result);
return (0);
}

