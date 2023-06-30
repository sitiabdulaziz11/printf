#include "main.h"
/**
 * print_x - hexca.
 * @args: arg
 *
 * Return: index
 */
int print_x(va_list args)
{
	unsigned int num;
	int i, j = 0, val[16];

	num = va_arg(args, int);
	while (num == 0)
	{
		_putchar(0);
		return (1);
	}
	while (num != 0)
	{
		val[j] = num % 16;
		num /= 16;
		j++;
	}
	i = j - 1;
	for (; i >= 0; i--)
	{
		if (val[j] <= 9)
		{
			_putchar('0' + val[j]);
		}
		else
		{
			_putchar('a' + val[j]); 
		}
	}
	return (j);
}
