#include <stdio.h>
#define UNUSED(X) (void)(x)

/**
  * main - prints program name
  * @argv: the array of argument
  * @argc: The count of arguments
  * Return: 0
  */
int main(int argc, char **argv)
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
