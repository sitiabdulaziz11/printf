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
	const char *str = "(nil)";
	unsigned long int k;

	ptr = va_arg(args, void*);
	if (ptr == NULL)
	{
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
	long int k, j, *arr;
	unsigned int temp = num;

	j = 0;
	while (num / 16 != 0)
	{
		num /= 16;
		j++;
	}
	j++;

	arr = malloc(j * sizeof(long int));

	for (k = 0; k < j; k++)
	{
		arr[k] = temp % 16;
		temp /= 16;
	}

	for (k = j - 1; k >= 0; k--)
	{
		if (arr[k] > 9)
		{
			arr[k] = arr[k] + 39;
		}
		_putchar(arr[k] + '0');
	}
	free(arr);
	return (j);
}
