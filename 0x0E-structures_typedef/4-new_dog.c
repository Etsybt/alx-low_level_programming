#include <stdlib.h>
#include "dog.h"
/**
  * _strlen - finds the length of str
  * @str: string
  * Return: length
  */
int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
  * _strcopy - copies a string
  * @dest: destination of str
  * @src: source string
  * Return: pointer to dest
  */
char *_strcopy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a]; a++)
		dest[a] = src[a];
	dest[a] = '\0';

	return (dest);
}
/**
  * new_dog - makes a new dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: new struct of dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);

	doggie->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}

	doggie->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}

	_strcopy(doggie->name, name);
	doggie->age = age;
	_strcopy(doggie->owner, owner);

	return (doggie);
}
