#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int tens, hundreds;

	for (tens = 0; tens <= 98; tens++)
	{
		for (hundreds = tens + 1; hundreds <= 99; hundreds++)
		{
			putchar((tens / 10) + '0');
			putchar((tens % 10) + '0');
			putchar(' ');
			putchar((hundreds / 10) + '0');
			putchar((hundreds % 10) + '0');

			if (tens == 98 && hundreds == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
