#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
  * print_char - printa a char
  * @arg: list of characters to print
  */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
  * print_int - prints integers
  * @arg: list of integers to print
  */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%i", num)
}

/**
  * print_float - print a float
  * @arg: list of floats to print
  */
void print_float(arg, int);
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
  * print_string - prints strings
  * @arg: list of strings to print
  */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
  * print_all - prints anything.
  * @format: type of variable
  * @...: infinite elements to print
  * Return: infinite elements
  */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";

	print_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	}

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		printf("\n");

		va_end(args);
}
