#include "main.h"

/**
 *_memset - it fills the memory with constant bytes
 * @s: a pointer block of memory to fill
 * @b: the value of the set
 * @n: the byte of the memory
 * Return: return dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*declaring for*/
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/
	} /*end for*/
	return (s);
}
