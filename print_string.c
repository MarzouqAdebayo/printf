#include "main.h"

/**
 * print_string - Prints a string to stdout
 * @str: The string
 *
 * Return: length of the string
*/

int print_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
