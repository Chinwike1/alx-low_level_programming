#include "main.h"

/**
 * _islower - checks if argument is lower case using ascii numbers
 * @c: value to be checked
 * Return: returns 1 if lowercase, returns 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
