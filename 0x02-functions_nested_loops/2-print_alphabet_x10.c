#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 */
void print_alphabet_x10(void)
{
	char i;
	int x = 0;

	while (x < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');

		x++;
	}
}
