#include"main.h"
/**
 * * _puts_recursion - this function writes a string
 * * calling it self several times
 * * @s: input
 * * Return always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
