#include "main.h"
/**
  *print_sign - prints te sign of the number
  *@n: int used for the function's argument
  *Return: 0 and print 0 if n is zero,
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
