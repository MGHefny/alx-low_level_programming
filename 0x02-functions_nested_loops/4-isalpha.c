#include "main.h"
/**
 * _isalpha - Entry Point
 * @c:cheker valuse
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c <= 'z' && c > 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
