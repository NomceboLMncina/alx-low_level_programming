
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: if not exactly 1 print, if exactly 1 error
 */
int main(int argc, char *argv[])
{
int dad, mum, lily;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

dad = atoi(argv[1]);
lily = 0;

if (dad < 0)
{
printf("0\n");
return (0);
}
for (mum = 0; mum < 5 && dad >= 0; mum++)
{
while (dad >= coins[mum])
{
lily++;
dad -= coins[mum];
}
}
printf("%d\n", lily);
return (0);
}

