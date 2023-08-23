#include"main.h"
/**
  * reverse_array - main function rev arr
  * @a: arr input
  * @n: num arr
  */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
