#include "main.h"
/**
 * print_string - print string
 * @args: args
 *
 * Return: i
 */
int print_string(va_list args)
{
	char *s;
	int i = 0;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
