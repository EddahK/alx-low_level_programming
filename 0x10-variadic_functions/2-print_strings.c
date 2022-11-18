#include "variadic_functions.h"

/**
  * print_strings - prints strings, followed by a new line.
  * @separator: The string to be printed between strings.
  * @n: number of strings passed to the function
  * @...: infinite strings to be printed
  * Return: ...
  */
oid print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int index;

	va_start(strs, n);

	for (index = 0; index < n; index++)
	{
		printf("%s", va_arg(strs, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
