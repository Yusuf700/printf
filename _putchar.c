#include <unistd.h>

/**
 * _putchar - prints the character c at stdout
 * @c: the character is printed
 *
 * Return: on success 1
 * on error, -1 is returned, and errno is set approximately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
