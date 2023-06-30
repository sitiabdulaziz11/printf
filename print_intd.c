#include "main.h"
/**
 * print_int - int
 * @args: args
 *
 * Return: i
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);
	int z = 0;
	int remainder;
	int digits[12];
	int i = 0, j;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		z++;
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num != 0)
	{
		remainder = num % 10;
		digits[i] = remainder;
		num = num / 10;
		i++;
	}
	j = i - 1;
	for (; j >= 0; j--)
	{
		_putchar(digits[j] + '0');
		z++;
	}
	return (z);
}
