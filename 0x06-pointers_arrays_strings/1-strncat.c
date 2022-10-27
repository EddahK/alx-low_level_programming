#include "main.h"

/**
*_strncat - function that concatenates n bytes to another string
* @dest: string to append to
* @src: string to add
* @n: number of bytes of str to concatenate
*
* Return: a pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
