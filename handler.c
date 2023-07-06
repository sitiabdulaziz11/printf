#include "main.h"
/**
 * _printf - custom printf function.
 * @format: format string.
 *
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	len = print_format(format, args);
	va_end(args);
	return (len);
}
/**
 * print_format - format.
 * @format: pointer.
 * @args: argument
 *
 * Return: index
 */
int print_format(const char *format, va_list args)
{
	int q = 0, len = 0;

	while (format && format[q] != '\0')
	{
		if (format[q] == '%')
		{
			q++;
			if (format[q] == 'p')
			{
				len += print_p(args);
			}
			else
			{
				len += write_format(format, args, q);
			}
		}
		else
		{
			_putchar(format[q]);
			len++;
		}
		q++;
	}
	return (len);
}
/**
 * write_format - call formats.
 * @format: pointer.
 * @args: arg
 * @q: counter.
 *
 * Return: index.
 */
int write_format(const char *format, va_list args, int q)
{
	switch (format[q])
	{
		case 'c':
			return (print_char(args));
		case 's':
			return (print_string(args));
		case '%':
			_putchar('%');
			return (1);
		case 'd':
		case 'i':
			return (print_int(args));
		case 'b':
			return (print_b(args));
		case 'o':
			return (print_o(args));
		case 'u':
			return (print_u(args));
		case 'r':
			return (print_rev(args));
		case 'x':
			return (print_x(args));
		case 'X':
			return (print_X(args));
		case 'R':
			return (print_S(args));
		case 'S':
			return (print_S(args));
		default:
			_putchar('%');
			_putchar(format[q]);
			return (2);
	}
}
