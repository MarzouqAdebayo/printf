#include "main.h"

void dummy(void);

/**
 * _printf - mimics the printf function from stdio library
 * @format:  String with/without specifiers. The format string is composed of
 *  zero or more directives
 *
 * Return: int - length of the string
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0;
	char *word;
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (('a' <= format[i + 1] && format[i + 1] <= 'z') || format[i + 1] == '%')
			{
				switch (format[i + 1])
				{
				case 'c':
					_putchar(va_arg(args, int));
					len += 1;
					i += 2;
					break;
				case 's':
					word = va_arg(args, char *);
					if (!word)
						return (-1);
					len += print_string(word);
					i += 2;
					break;
				case '%':
					_putchar('%');
					i += 2;
					len += 1;
					break;
				case 'd':
					len += print_decimal(va_arg(args, int));
					i += 2;
					break;
				case 'i':
					len += print_decimal(va_arg(args, int));
					i += 2;
					break;
				case 'b':
					len += print_binary(va_arg(args, int));
					i += 2;
					break;
				}
			}
			else
				return (-1);
		}
		else
		{
			_putchar(format[i]);
			i++;
			len++;
		}
	}
	va_end(args);
	return (len);
}

/**
 * dummy - to trick betty
 * Return: void
 */
void dummy(void)
{
}
