
#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int oly;

for (oly = 0; oly < argc; oly++)
{
printf("%s\n", argv[oly]);
}
return (0);
}

