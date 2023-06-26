#include <stdarg.h>
#include "main.h"
#include <unistd.h>
/**
 * _printf - To write own printf.
 * @format: pointer
 * Return: plus
 */
int _printf(const char *format, ...)
{
	va_list par;
	int d, charc;
	int plus = 0;
	char *pptr;

	va_start(par, format);
	d = 0;
	while (format[d] != '\0')
	{
		if (format[d] == '%')
		{
			d++;
			if (format[d] == 'c')
			{
				charc = va_arg(par, int);
				plus = _print_char(charc, plus);
			}
			else if (format[d] == 's')
			{
				pptr = va_arg(par, char *);
				plus = print_string(pptr, plus);
			}
			else if (format[d] == '%')
			{
				write(1, &format[d], 1);
				plus++;
			}
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
 * _print_char - handle character specifiers
 * @var: character
 * @plus: count
 * Return: plus
 */
int _print_char(char var, int plus)
{
	write(1, &var, 1);
	return (plus + 1);
}
/**
 * print_string - handle string specifiers.
 * @ptr: pointer
 * @plus: count.
 * Return: plus
 */
int print_string(char *ptr, int plus)
{
	plus = 0;
	while (*ptr != '\0')
	{
		write(STDOUT_FILENO, ptr, 1);
		ptr++;
		plus++;
	}
	return (plus);
}

