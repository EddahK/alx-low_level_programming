#include<stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, product;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		product = i * j;
		printf("%d\n", product);
	
	return (0);
}
