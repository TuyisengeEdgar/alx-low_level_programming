#include "../main.h"
/**
 *  main - check the code for Holberton School students.
 *  Return: Always 0.
 */
int main(void)
{
	int n;
	int r;
	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
