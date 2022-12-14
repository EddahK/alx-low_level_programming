#include "main.h"

/**
  * _pow_recursion - value of x to the power of y
  * @x: number
  * @y: power of
  * Return: result of x
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
