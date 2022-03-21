#include "main.h"

/**
 *_puts - prints a string, to stdout
 *@str: value to be evaluate.
 *Return: no return
 */

void _puts(char *str)
{

	while (str != '\0')
	{
		_puts(*str);
		str++;
	}
	_puts('\n');
}
