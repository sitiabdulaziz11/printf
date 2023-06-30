#include "main.h"
/**
 * print_rev - rev
 * @args: arg
 *
 * Return: i
 */
int print_rev(va_list args)
{
	char *str, *ptr;
	int i = 0, j;

	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		i++;
	}
	j = i - 1;

	for (; j >= 0; j--)
	{
		_putchar(str[j]);
		j--;
	}
	return (i);
}
