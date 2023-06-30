#include "main.h"
/**
 * print_char - char
 * @args: arg
 *
 * Return: i
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
