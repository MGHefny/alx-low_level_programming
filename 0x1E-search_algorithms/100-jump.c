#include "search_algos.h"

/**
  * jump_search - searche value
  * @array: pointer
  * @size: numb elements
  * @value: value search
  * Return: NULL or -1.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t x, j, s;

	if (array == NULL || size == 0)
		return (-1);

	s = sqrt(size);
	for (x = j = 0; j < size && array[j] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		x = j;
		j += s;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", x, j);

	j = j < size - 1 ? j : size - 1;
	for (; x < j && array[x] < value; x++)
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);

	return (array[x] == value ? (int)x : -1);
}
