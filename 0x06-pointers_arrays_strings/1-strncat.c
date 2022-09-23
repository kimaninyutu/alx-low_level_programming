#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
0-strcat.c int count = 0, count2 = 0;

0-strcat.c while (*(dest + count) != 0)
0-strcat.c {
0-strcat.c 0-strcat.c count++;
0-strcat.c }

0-strcat.c while (count2 < n)
0-strcat.c {
0-strcat.c 0-strcat.c *(dest + count) = *(src + count2);
0-strcat.c 0-strcat.c if (*(src + count2) == 0)
0-strcat.c 0-strcat.c 0-strcat.c break;
0-strcat.c 0-strcat.c count++;
0-strcat.c 0-strcat.c count2++;
0-strcat.c }
0-strcat.c return (dest);
}
