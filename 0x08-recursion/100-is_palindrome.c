#include "main.h"
/**
 * length - the length of string
 * @s: string
 * Return: the value
 */
int length(char *s)
{
	if (*s != '\0')
		return (1 + length(s + 1));
	return (0);
}
/**
 * solve - the length of string
 * @s: string
 * @length: the string length
 * @m: number
 * Return: the value
 */
int solve(char *s, int m, int length)
{
	if (m >= length)
		return (1);
	if (*(s + m) != *(s + length - 1))
		return (0);
	return (solve(s, m + 1, length - 1));
}
/**
 * is_palindrome - comparasion of string
 * @s: string
 * Return: the value
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (solve(s, 0, length(s)));
}
