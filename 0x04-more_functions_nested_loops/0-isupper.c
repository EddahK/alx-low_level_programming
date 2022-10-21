#include "main.h"

/**
 * _isupper - check if a character is uppercase
 *
 * @c: int is the char
 * Return: 1 if c is uppercase, 0 is otherwise
 */
int _isupper(int c)
{
	int isUpper = 0;

	if (c >= 'A' && c <= 'Z')
		isUpper = 1;

	return (isUpper);
}
