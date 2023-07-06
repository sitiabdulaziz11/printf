#include "main.h"
/**
 * print_f - print flag.
 * @format: pointer.
 * @q: index.
 *
 * Return: flag.
 */
int print_f(const char *format, int *q)
{
	int h, f;
	int flag = 0;

	const char ch[10] = {'-', '+', '0', '#', ' ', '\0'};
	const char arr[10] = {M, P, Z, H, S, 0};

	for (f = *q + 1; format[f] != '\0'; f++)
	{
		for (h = 0; ch[h] != '\0'; h++)
		{
			if (format[f] == ch[h])
			{
				flag |= arr[h];
				break;
			}
			if (ch[h] == 0)
				break;
		}
	}
	*q = f - 1;
	return (flag);
}
