#include "main.h"

/**
* _strlen - function that returns the length of a string.
*
* @s: character
*/
int _strlen(char *s)
{
int len = 0;

while (*s++)
len++;

return (len);
}
