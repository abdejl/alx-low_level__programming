#include "main.h"
/**
 * * _print_rev_recursion - prints a string in revers
 * * @s: input
 * * Return always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
