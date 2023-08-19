#include "main.h"

/**
 * prinf_binary - Prints a number in base 2
 * @n: number to be converted and printed
 *
 * Return: the length of the number
 */

int print_binary(int n)
{
	int power = 0, mul = 0, total = 0, len, rem = 0;

	if (n == 1)
		total++;

	while (n > 0)
	{
		rem = n - ((n / 2) * 2);
		if (power == 0)
			mul = 1;
		else
			mul *= 10;
		if (rem != 0)
			total += rem * mul;
		power++;
		n /= 2;
	}
	len = print_decimal(total);
	return (len);
}
