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
	int digits[12];
	int i = 0, j;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		z++;
		if (num == INT_MIN)
		{
			num = -(num + 1);
			digits[0] = num % 10 + 1;
			num = num / 10;
			i++;
		}
		else
			num = -num;
	}
	while (num != 0)
	{
		digits[i] = num % 10;
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
