#include "main.h"

/**
* puts_half - a function that prints half of a string,
* followed by a new line.
*
* @str: string to be printed
*/
void puts_half(char *str)
{
int len = 0;

while (*str != '\0')
{
len++;
str++;
}

str -= (len / 2);
while (*str != '\0')
{
putchar(*str);
str++;
}

putchar('\n');
  
}
