#include"main.h"
/**
  * cap_string - main function
  * @str: input string
  * Return: str
  */

char *cap_string(char *str)
{
	int x = 0;

	while (str[x])
	{


		if (str[x - 1] == ' ' || str[x - 1] == '\t' ||
		    str[x - 1] == '\n' || str[x - 1] == ',' ||
		    str[x - 1] == ';' || str[x - 1] == '.' ||
		    str[x - 1] == '!' || str[x - 1] == '?' ||
		    str[x - 1] == '"' || str[x - 1] == '(' ||
		    str[x - 1] == ')' || str[x - 1] == '{' ||
		    str[x - 1] == '}' || x == 0)
			str[x] -= 32;


		while (!(str[x] >= 'a' && str[x] <= 'z'))
			x++;


		x++;
	}

	return (str);
}
