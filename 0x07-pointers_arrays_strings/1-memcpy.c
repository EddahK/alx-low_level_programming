#include "main.h"

/**
* *_memcpy - function that copies memory area.
* @dest: area to copy to
* @src: area to copy from
* @n: bytes to copy
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest); 
}
