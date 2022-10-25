#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i = 0;

putchar(*s++);
while (s[i] != '\0')

i++;
for (i = i - 1; i >= 0; i--)
putchar(s[i]);
}
