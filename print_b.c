#include "main.h"
/**
 * print_b - binary.
 * @args: arg
 *
 * Return: index
 */
int print_b(va_list args)
{
	unsigned int num;
	int i, j = 0, val[32];

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num != 0)
	{
		val[j] = num % 2;
		num /= 2;
		j++;
	}
	i = j - 1;
	for (; i >= 0; i--)
	{
		_putchar('0' + val[i]);

	}
	return (j);
}
