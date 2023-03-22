#include "main.h"

/**
 * _isalpha - checks if argument is an alphabet using ascii numbers
 * @c: value to be checked
 * Return: returns 1 if alphabet, returns 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
