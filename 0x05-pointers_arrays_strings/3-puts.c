#include "main.h"
/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 * *Return:void.
 */
void _puts(char *str)
{
	int p, k;
	
	while (*(str + p) != 0)
	{
		p++;
	}
	for (k = 0; k < p; k++)
	{
		_putchar(str[k]);
	}

	_putchar('\n');
}
