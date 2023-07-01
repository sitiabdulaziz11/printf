#include "main.h"
/**
 * print_X - hexca.
 * @args: arg
 *
 * Return: index
 */
int print_X(va_list args)
{
	unsigned int num, val[32], temp;
	int i, j = 0;

	num = va_arg(args, unsigned int);
	while (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num != 0)
	{
		temp = num % 16;
		num /= 16;
		val[j] = temp;
		j++;
	}
	i = j - 1;
	for (; i >= 0; i--)
	{
		if (val[i] > 9)
			_putchar(val[i] + 'A' - 10);
		else
			_putchar('0' + val[i]);
	}
	return (j);
}
