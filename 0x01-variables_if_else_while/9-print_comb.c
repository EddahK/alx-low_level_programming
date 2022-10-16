#include <stdio.h>
/**
 * main -Entry point
 * Description: prints all possible combinations of single-digit numbers.
 * separated by a ,
 * printed in ascending order
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	
	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);

		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
