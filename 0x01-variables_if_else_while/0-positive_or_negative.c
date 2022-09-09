/*
 * File: 0-positive_or_negative.c
 * Auth: Brennan D Baraban
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
README.md int n;

README.md srand(time(0));
README.md n = rand() - RAND_MAX / 2;

README.md if (n > 0)
README.md README.md printf("%d is positive\n", n);
README.md else if (n < 0)
README.md README.md printf("%d is negative\n", n);
README.md else
README.md README.md printf("%d is zero\n", n);

README.md return (0);
}
