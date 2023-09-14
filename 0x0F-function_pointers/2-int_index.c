#include "function_pointers.h"
/**
 * int_index - return ind compa = true or else -1
 * @array: arr value
 * @size: ele size in arr
 * @cmp: pointer
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
