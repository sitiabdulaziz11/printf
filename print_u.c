#include "main.h"
/**
 * print_u - unsigned int.
 * @args: arg
 *
 * Return: index
 */
int print_u(va_list args)
{
	unsigned int num, temp, res, digit = 0, div;
	unsigned int i, j = 0;

	num = va_arg(args, unsigned int);
	temp = num;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	do {
		digit++;
		temp /= 10;
	} while (temp != 0);

	while (digit > 0)
	{
		div = 1;
		for (i = 1; i < digit; i++)
		{
			div *= 10;
		}
		res = num / div;
		_putchar('0' + res);
		num %= div;
		digit--;
		j++;
	}
	return (j);
}
