#include"main.h"
/**
  * _strcat - main function
  * @dest: input
  * @scr: input
  *Return: dest
  */

char *_strcat(char *dest, char *scr)
{

	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
