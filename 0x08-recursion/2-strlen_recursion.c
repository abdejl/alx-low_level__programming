#include "main.h"
/**
 * * _strlen_recursion - returns the length of a string
 * * @s: the string to be measured
 * * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
	i++;
	i += _strlen_recursion(s + 1);
	}
	return (i);
}
