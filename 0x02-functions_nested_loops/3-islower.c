#include "main.h"
/**
 * _islower - Entry Point
 *
 *@c : is tha valuse cheker
 *
 * Return:1 if c is lowercase other 0
 */

int _islower(int c)
{
	if (c <= 122 && c > 97)
		return (1);
	else
		return (0);
}
