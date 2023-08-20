#include "main.h"
/**
 * printf_string - print a string.
 * @val: argument.
 * Return: the length of the string.
 */

int printf_string(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}if{
	//Nonprintable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, 
	//followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
