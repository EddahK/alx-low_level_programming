#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char tmp[1002];

	while (s[i] != '\0')
		i++;
	for (i > 0; i--)
	{
		tmp[j] = s[i - 1];
		j++;
	}

	while (i < j)
	{
		s[i] = tmp[i];
		i++;
	}
}
