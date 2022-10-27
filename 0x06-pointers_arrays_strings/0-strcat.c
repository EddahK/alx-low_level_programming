#include "main.h"

/**
* *_strcat - function appends the src string to the dest string
* 
* Return: a pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
strcat( dest, src);
printf("strcat( dest, src):   %s\n", dest );
}
