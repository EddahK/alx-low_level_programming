#include "main.h"

/**
* print_rev -  a function that prints a string, in reverse, followed by a new line.
* @s: the string to be printed in reverse
* Return: Always 0.
*/
void print_rev(char *s)
{
int i = 0;

while (s[i] != '\0')
i++;
for (i = i - 1; i >= 0; i--)
putchar(s[i]);
putchar('\n')
}
