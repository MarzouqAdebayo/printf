#include "main.h"
/**
 * printf_unsigned - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_unsigned(va_list args)
{
  int m, last = n % 10, digit, xp = 1;
  unsigned int n = va_arg(args, unsigned int);
	int  i = 1;
	n = n / 10;
	m = n;

	if (last < 0)
	{
		_putchar('-');
		m = -m;
		n = -n;
		last = -last;
		i++;
	}
	if (m > 0)
	{
		while (m / 10 != 0)
		{
			xp = xp * 10;
			m = m / 10;
		}
		m = n;
		while (xp > 0)
		{
			digit = m / xp;
			_putchar(digit + '0');
			m = m - (digit * exp);
			xp = xp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
