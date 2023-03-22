#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in english 10 times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char i;
	int x;

	for (x = 1; x <= 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
