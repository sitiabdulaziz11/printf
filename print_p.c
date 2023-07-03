#include "main.h"
/**
 * print_p - pointer.
 * @args: arg
 *
 * Return: index
 */
int print_p(va_list args)
{
	void *ptr;
	int i;
	const char *str;
	unsigned long int k;

	ptr = va_arg(args, void*);
	if (ptr == NULL)
	{
		str = "(nil)";
		i = 0;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		return (i);
	}
	k = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	return (print_hex(k) + 2);
}
/**
 * print_hex - hex
 * @num: k
 *
 * Return: index
 */
int print_hex(unsigned long int num)
{
	int i, j = 0, arr[64];
	unsigned int temp = num;

	for (i = 0; temp != 0; i++)
	{
		arr[i] = temp % 16;
		temp /= 16;
	}
	j = i - 1;
	for (; j >= 0; j--)
	{
		if (arr[j] > 9)
			_putchar(arr[j] + 'a' - 10);
		else
			_putchar(arr[j] + '0');
	}
	return (i);
}
