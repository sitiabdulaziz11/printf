#include "main.h"
/**
 * _putchar - write characters.
 * @c: character.
 * Return: 1 on success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
