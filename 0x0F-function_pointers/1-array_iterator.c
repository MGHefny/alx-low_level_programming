#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - print arr in new line
 * @array: arr value
 * @size: numb of ele
 * @action: pointer the hex or regular
 * Return: null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
