#include"main.h"
/**
  * rev_string - print rev string
  * @s :input
  */

void rev_string(char *s)
{
	char r = s[0];
	int x;
	int n = 0;

	while (s[n] != '\0')
	n++;

	for (x = 0; x < n; x++)
	{
		n--;
		r = s[x];
		s[x] = s[n];
		s[n] = r;
	}
}
