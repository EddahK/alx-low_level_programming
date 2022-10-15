#include <stdio.h>
/**
 * main -Entry point
 * Description: prints all single digit numbers of
 * base 10 from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
