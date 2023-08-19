#include "main.h"

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
			if ('a' <= format[i + 1] && format[i + 1] <= 'z')
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
					len += print_string(word);
					i += 2;
					break;
				case '%':
					_putchar('%');
					i += 2;
					len += 1;
					break;
				case 'd':
					len += print_digit(va_arg(args, int));
					i += 2;
					break;
				}
			} else
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
