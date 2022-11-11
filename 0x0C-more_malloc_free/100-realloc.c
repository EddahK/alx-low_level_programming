#include "main.h"

/**
  * _realloc - reallocates memory
  * @ptr: previous memory
  * @old_size: byte size for ptr
  * @new_size: byte size of new memory
  * Return: new memory pointer
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *realloc;
	unsigned int i;

	if (ptr != 0)
		clone = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	realloc = malloc(new_size);
	if (realloc == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(realloc + i) = clone[i];
	}
	free(ptr);
	return (realloc);
}
