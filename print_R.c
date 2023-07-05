#include "main.h"
/**
 * print_R - print rot13.
 * @args: argument.
 *
 * Return: count
 */
int print_R(va_list args)
{
	int h, k = 0, l, num = 0;
	char *p;
	char *org;
	char *rot;

	p = va_arg(args, char *);

	org = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (p == NULL)
		p = "(nil)";

	for (h = 0; p[h]; h++)
	{
		k = 0;
		for (l = 0; org[l] && !k; l++)
		{
			if (p[h] == org[l])
			{
				_putchar(rot[l]);
				num++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(p[h]);
			num++;
		}
	}
	return (num);
}
