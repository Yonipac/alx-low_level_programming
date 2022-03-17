#include"main.h"

/**
 * _isupper - function that checks for uppercaase character.
 * @c: int type number
 * Return: Always 0.
*/

int _isupper(int c)
{
	if (c >= 65 && c<= 91)
		return (1);
	else
		return (0);
}
