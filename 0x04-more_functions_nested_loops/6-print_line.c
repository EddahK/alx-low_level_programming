#include "main.h"

/**
* print_line - function that draws a straight line in the terminal.
* Where n is the number of times the char _ should be printed
* line should end with a \n
* If n is 0 or less, the function should only print \n
*/
void print_line(int n)
{
int n;
if (n <= 0)
{
putchar('\n');
} 
else
{
int i;
for (i = 1; i <= n; i++)
{
putchar('_');
}
putchar('\n');
}
}
