#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

{
	convert_identify p[] = {
    		{"%i", printf_intiger}, {"%d", printf_decimal}, {"%r", printf_srev},		
  	  	{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_%},
		{"%R", printf_rot13}, {"%b", printf_binary}, {"%u", printf_unsigned},
		{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_exclusive_string}, {"%p", printf_pointer}
	};

	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].id[0] == format[i] && p[j].id[1] == format[i + 1])
			{
				len += p[j].f(args);
				i = i + 2;
		
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
