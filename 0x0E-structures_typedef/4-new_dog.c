#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	return (p);
}
/**
 * _strcpy - function that copies string
 * @src: string
 * @dest: pointer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int p, length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	for (p = 0; p < length; p++)
	{
		dest[p] = src[p];
	}
	dest[p] = src[p];
	return (dest);
}
/**
 * new_dog - function that creates a new dog
 * @name: first element
 * @age: second element
 * @owner: third element
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
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
