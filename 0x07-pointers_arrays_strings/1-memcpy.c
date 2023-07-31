#include "main.h"
/**
 * _memcpy - copies memory area.
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned int
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int temp;
for (temp = 0; n > 0; temp++)
{
dest[temp] = src[temp];
n -= 1;
}
return (dest);
}