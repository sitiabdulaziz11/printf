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
	int q = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format && format[q] != '\0')
	{
		if (format[q] == '%')
		{q++;
			switch (format[q])
			{case 'c': len += print_char(args); break;
				case 's': len += print_string(args); break;
				case '%': _putchar('%');
					  len++; break;
				case 'd':
				case 'i': len += print_int(args); break;
				case 'b': len += print_b(args); break;
				case 'o': len += print_o(args); break;
				case 'u': len += print_u(args); break;
				case 'r': len += print_rev(args); break;
				case 'x': len += print_x(args); break;
				default: _putchar('%');
					_putchar(format[q]);
					len += 2; break; }
		}
		else
		{_putchar(format[q]);
			len++; } q++; }
	va_end(args);
	return (len); 
}
