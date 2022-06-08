#include<stdio.h>
/**
 * putchar prints _putchar, followed by a new line.
 * function of 0-putchar.c
 */
void putchar(void)
{
	/*beginning*/
	_putchar("_");
	_putchar("p");
	_putchar("u");
	_putchar("t");
	_putchar("c");
	_putchar("h");
	_putchar("a");
	_putchar("r");
	_putchar("\n");
}
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
