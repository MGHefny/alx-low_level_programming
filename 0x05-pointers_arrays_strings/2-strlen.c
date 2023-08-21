#include "main.h"

/**
  * _strlen - lenth of string
  * @s: string
  * Return: the length
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
