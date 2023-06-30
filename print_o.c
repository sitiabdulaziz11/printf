#include "main.h"
/**
 * print_o - octal.
 * @args: arg
 *
 * Return: index
 */
int print_o(va_list args)
{
	unsigned int num;
	int i, j = 0, val[12];

	num = va_arg(args, int);
	while (num == 0)
	{
		_putchar(0);
		return (1);
	}
	while (num != 0)
	{
		val[j] = num % 8;
		num /= 8;
		j++;
	}
	i = j - 1;
	for (; i >= 0; i--)
	{
		_putchar('0' + val[j]);

	}
	return (j);
}
