#include "main.h"

/**
 * print_p - pointer.
 * @args: arg
 *
 * Return: number of characters printed
 */
int print_p(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long int address = (unsigned long int)ptr;

	_putchar('0');
	_putchar('x');
	return (print_hex(address, sizeof(void *) * 2) + 2);
}
/**
 * print_hex - print hexadecimal representation of a numbe
 * @num: number to be printed
 * @width: width of the hexadecimal representation
 *
 * Return: number of characters printed
 */
int print_hex(unsigned long int num, int width)
{
	char hex_digits[] = "0123456789abcdef";
	char hex_value[16];
	int remainder, count = 0;
	int k, j, i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num != 0)
	{
		remainder = num % 16;
		hex_value[i] = hex_digits[remainder];
		num /= 16;
		i++;
	}
	for (k = i - 1; k >= 0; k--)
	{
		_putchar(hex_value[k]);
		count++;
	}
	for (j = 0; j < width - i; j++)
	{
		_putchar('0');
		count++;
	}
	return (count);
}
