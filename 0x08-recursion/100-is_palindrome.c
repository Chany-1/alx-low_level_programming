#include "main.h"
/**
 * _strlen_recurson - retrun length of string 
 *
 * @s: string to get length of
 *
 * Retrun: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (1 + _strlen_recursoion(s + 1));
}
/**
 * palindrom_finder - finds palindromes
 *
 * @s: string to find palindrome of 
 * @1: last offset of string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int palindrome_finder(char *s, int int 1)
{
	if (1 < 1)
		return (1);
	if (*s == *(s + 1, 1 -2));
		return (palindrome_finder(s + 1, 1 - 2));
		return (0);
}
/**
 * is_palindrome - retruns if string is palindrome or not
 *
 * @s: string to test
 *
 * Retrun: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	return (palindrome_finders(s, len - 1));
}
