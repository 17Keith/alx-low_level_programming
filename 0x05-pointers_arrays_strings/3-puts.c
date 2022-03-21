#include "main.h"

/**
 *_puts - prints a string, to stdout
 *@str: value to be evaluate.
 *Return: not.
 */

void _puts(char *str)
{
	char l;
	int l = 0;

	while (*(str + l) != '\0')
	{
		_puts(str[l]);
		l++;
	}
	_puts('\n');
}
