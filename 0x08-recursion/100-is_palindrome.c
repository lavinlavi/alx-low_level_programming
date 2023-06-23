#include "main.h"

int get_my_palindrome(char *y, int i);
int get_string_length(char *x);

/**
 * is_palindrome - checks if a given string is a palindrome.
 *
 * @s: pointer to the string that was passed.
 *
 * Return: 0 if not palindrome and 1 if is palindrome.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (get_my_palindrome(s, get_string_length(s)));
}

/**
 * get_string_length - returns the length of the string.
 *
 * @x: pointer to the string
 *
 * Return: returns the length of the string in integer format.
 */
int get_string_length(char *x)
{
	if (*x == '\0')
	{
		return (0);
	}
	return (1 + get_string_length(x + 1));
}

/**
* get_my_palindrome - checks if the string passed is a palindrome.
*
* @y: the pointer to the string passed.
* @i: the length of the string passed.
*
* Return: returns 1 if the string is a palindrome and 0 otherwise.
*/
int get_my_palindrome(char *y, int i)
{

	if (*y == '\0')
	{
		return (1);
	}
	if (*y == *(y + (i - 1)))
	{
		return (get_my_palindrome(y + 1, i - 2));
	}
	return (0);
}
