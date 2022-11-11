#include "main.h"

/**
  * array_range - creates array of ints
  * @min: lowest values
  * @max: highest value
  * Return: pointer
  */
int *array_range(int min, int max)
{
	int *arr, i = 0, t - min;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (NULL);
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
}
