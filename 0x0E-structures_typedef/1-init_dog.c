#include "dog.h"

/**
  * init_dog - inits a variable of
  * @d: dog identification
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: dog details
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
 if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
