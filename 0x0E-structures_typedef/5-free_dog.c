#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - function that frees dogs
  * @d: dog details to dump
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
