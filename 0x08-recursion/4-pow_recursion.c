#include "main.h"
/**
 * * _pow_recursion - returns the power of a number
 * * @x: the input number
 * * @y: the power number
 * * Return: the power of a number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * (_pow_recursion(x, y - 1)));
	}
}
