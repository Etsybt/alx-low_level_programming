#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - initilizes a dog
  * @d: dog as an int
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
