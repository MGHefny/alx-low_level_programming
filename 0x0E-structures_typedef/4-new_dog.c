#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - len of str
 * @s: str value
 * Return: length of str
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * *_strcpy - send string to src
 * @dest: pointer to copy string
 * @src: string to copied
 * Return: the dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;
	int l = 0;

	while (src[l] != '\0')
	{
		l++;
	}
	for (x = 0; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
/**
 * new_dog - new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer new dog (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int y, z;

	y = _strlen(name);
	z = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (y + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (z + 1));
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
