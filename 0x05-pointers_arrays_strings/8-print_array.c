#include "main.h"

/**
* print_array - prints n elements of an array of integers
* @a: array to be printed
* @n: the number of elements in the array
* Return: Always 0.
*/
void print_array(int *a, int n)
{
int t;
for (t = 0; t < n; t++)
{
printf("%d", a[t]);
if (t != n - 1)
printf(", ");
}
printf("\n");
}
