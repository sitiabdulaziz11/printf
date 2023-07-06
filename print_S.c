#include "main.h"
/**
 *
 */
int print_S(va_list args)
{
	char *s;
	int i, lent = 0;
	int p;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(nuil)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			lent += 2;
			p = s[i];
			if (p < 16)
			{
				_putchar('0');
				lent++;
			}
			lent += print_hex(p);
		}
		else
		{
			_putchar(s[i]);
			lent++;
		}
	}
	return (lent);
}
