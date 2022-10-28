#include "main.h"

/**
* rot13 - encodes a string using rot13
* @s: pointer to array
* Return: pointer to s
*/
char *rot13(char *s)
{
  char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	char *strcopy = s;

	while (*s != '\0')
	{
		for (i = 0; i < 52; i++)
			if (*s == in[i])
			{
				*s = out[i];
				break;
			}
		s++;
	}
	return (strcopy);
}
