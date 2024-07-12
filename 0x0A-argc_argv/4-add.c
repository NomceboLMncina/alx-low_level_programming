
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * digit_number - string that have digit
 * @str: array
 *
 * Return: Always 0 (Success)
 */
int digit_number(char *str)
{
/*Declaring variables*/
unsigned int symbols;

symbols = 0;

while (symbols < strlen(str)) /*symbols string*/
{

if (!isdigit(str[symbols])) /*string that have digit*/
{
return (0);
}
symbols++;
}
return (1);
}

/**
 * main - Name of the program
 * @argc: Numbers of arguments
 * @argv: Arrays of arguments
 *
 *  Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
/*Declaring variables*/
int symbols;
int str_to_int;
int sum = 0;

symbols = 1;

while (symbols < argc) /*Goes through the whole array*/
{
if (digit_number(argv[symbols]))
{
str_to_int = atoi(argv[symbols]); /*ATOI --> convert string to int*/
sum += str_to_int;
}
/*Condition if one of the number contains symbols that are not digits*/
else
{
printf("Error\n");
return (1);
}
symbols++;
}
printf("%d\n", sum); /*print sum*/
return (0);
}

