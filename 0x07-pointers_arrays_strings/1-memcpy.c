#include "main.h"
/**
 * _memcpy - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
0-memset.c unsigned int i;

0-memset.c for (i = 0; i < n; i++)
0-memset.c 0-memset.c *(dest + i) =  *(src + i);

0-memset.c return (dest);
}
