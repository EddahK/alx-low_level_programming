#include "functions_pointers.h"

/**
  * print_name - function prints name
  * @name: name to print
  * @f: pointer to the print function
  * Return: name
  */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
