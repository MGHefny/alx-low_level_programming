#include"main.h"
/**
  * _strcat - main function
  * @dest: input
  * @scr: input
  *Return: dest
  */

char *_strcat(char *dest, char *scr)
{

	int x, y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
