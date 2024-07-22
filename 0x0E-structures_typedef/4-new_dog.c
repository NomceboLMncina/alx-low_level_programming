#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - the length of a string
 * @s: the string
 *
 * Return: pointer to dest
 */
int _strlen(char *s)
{
int a;

a = 0;

while (s[a] != '\0')
{
a++;
}
return (a);
}


/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer where to copy the string
 * @src: string to copy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int oly, a;

oly = 0;

while (src[oly] != '\0')
{
oly++;
}
for (a = 0; a < oly; a++)
{
dest[a] = src[a];
}
dest[a] = '\0';
return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int oly1, oly2;

oly1 = _strlen(name);
oly2 = _strlen(owner);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (oly1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (oly2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
