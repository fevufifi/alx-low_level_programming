#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 * Return: s1[i] - s2[i]
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference of the unmatched characters
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
