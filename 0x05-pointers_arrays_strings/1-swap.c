#include "main.h"

/**
  * swap_int - swap input of tow int
  * @a: first int
  * @b: second int
  */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
