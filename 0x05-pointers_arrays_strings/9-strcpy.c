#include"main.h"
/**
  * char *_strcpy - copy str pointer
  * @dest: copy
  * @scr: copy
  * Return: str
  */

char *_strcpy(char *dest, char *scr)
{
	int x = 0;
	int y;

	while (*(scr + x) != '\0')
	{
		x++;
	}
	for (y = 0; y < x ; y++)
	{
		dest[y] = scr[y];
	}
	dest[x] = '\0';
	return (dest);
}
