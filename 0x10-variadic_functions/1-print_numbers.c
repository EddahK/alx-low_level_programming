#include "variadic_functions.h"

/**
  * print_numbers -function that prints numbers.
  * @separator: string to be printed between numbers
  * @n: number of int passed to the function
  * @...: infinite numbers to be printed
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
