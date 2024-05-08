#include "search_algos.h"

/**
  * linear_search - searche for value in array
  * @array: pointer first element
  * @size: numb element
  * @value: value
  *
  * Return: NULL or -1.
  * Description: Print value every time
  */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}

	return (-1);
}
