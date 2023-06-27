#include "main.h"
/**
 * print_intr - print integer.
 * @intrr: integer
 * @plus: count
 * Return: plus
 */
int print_intr(int intrr, int plus)
{
	if (intrr < 0)
	{
		_putchar('-');
		plus++;
		intrr = -intrr;
	}
	if (intr >= 10)
	{
		plus += print_intr(intrr / 10);
	}
	_putchar('0' + (intrr % 10));
	plus++;
	return (plus);
}
