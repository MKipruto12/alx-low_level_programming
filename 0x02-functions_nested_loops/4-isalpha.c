#include "main.h"

/** _isalpha:code block checks for alphabetic char
 * @c: char to be checked
 * Return: 1 is c is a letter else o
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
