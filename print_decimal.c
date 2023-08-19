#include "main.h"

/**
 * print_positive_number - Body of the function
 * @n: The argument n to be printed
 * @ptr: Pointer the length of the string
 *
 * Description: Prints numbers using putchar
 * Return: has no return value
 */

void print_positive_number(int n, int *ptr)
{
	if (n < 1)
		return;
	print_positive_number(n / 10, ptr);
	_putchar(48 + (n % 10));
	(*ptr)++;
}

/**
 * print_decimal - Body of the function
 * @n: The argument n to be printed
 *
 * Description: Prints numbers using putchar
 * Return: has no return value
 */
int print_decimal(int n)
{
	int len = 0;
	int *ptr = &len;

	if (n == 0)
	{
		_putchar(48);
		return (len++);
	}
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		len++;
	}
	print_positive_number(n, ptr);

	return (len);
}
