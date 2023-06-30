#include "main.h"
/**
 * _printf - To write own printf.
 * @format: pointer
 * Return: plus
 */
int _printf(const char *format, ...)
{
	va_list par;
	int d, plus = 0;

	va_start(par, format);
	if (format == NULL ||(format[0] == '%' && format[1] == '\0'))
		return (-1);
	d = 0;
	while (format && format[d] != '\0')
	{
		if (format[d] == '%')
		{
			_switch(format, par, plus, d);
			plus++;
		}
		else
		{
			write(1, &format[d], 1);
			plus++;
		}
		d++;
	}
	va_end(par);
	return (plus);
}
/**
 * _switch - switch case.
 * @format: pointer
 * @par: variable argument lit.
 * @plus: count
 * @d: index.
 * Return: plus.
 */
int _switch(const char *format, va_list par, int plus, int d)
{
	int charc, intrr;
	char *pptr;

	switch (format[d])
	{
		case 'c':
			charc = va_arg(par, int);
			write(1, &charc, 1);
			plus++;
			break;
		case 's':
			pptr = va_arg(par, char *);
			print_string(pptr);
			break;
		case 'd':
			intrr = va_arg(par, int);
			plus = print_intr(intrr, plus);
			break;
		case 'i':
			intrr = va_arg(par, int);
			plus = print_intr(intrr, plus);
			break;
		case '%':
			_putchar('%');
			plus++;
			break;
		default:
			_putchar(format[-1]);
			_putchar(*format);
			plus++;
			break;
	}
	return (plus);
}
/**
 * print_string - handle string specifiers.
 * @ptr: pointer
 * @plus: count.
 * Return: plus
 */
int print_string(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		_putchar(s[p]);
		p++;
	}
	return (p);
}
