#include "main.h"

/**
 * _isalpha - Shows 1 if the input of c is lowercase or uppercase
 * Return: 1 for letter. Returns 0 for characters
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c<= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
