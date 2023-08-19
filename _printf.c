#include "main.h"

int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0;
	char *word;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1]){}
			switch (format[i + 1])
			{
			case 'c':
				_putchar(va_arg(args, int));
				i += 2;
				break;
			case 's':
				word = va_arg(args, char *);
				print_string(word);
				i += 2;
				break;
			case '%':
				_putchar('%');
				i += 2;
				break;
			}
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (len);
}
