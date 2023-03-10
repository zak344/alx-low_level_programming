#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Search string for first occurence that matches accept
 * @s: String to search
 * @accept: Chars to search for match
 *
 * Return: Pointer to first occurence in string of chars in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int flag, c;

	flag = 1;
	while (*s && flag)
	{
		c = 0;
		while (*(accept + c) != '\0' && flag)
		{
			if (*(accept + c) == *s)
				flag = 0;
			c++;
		}
		if (flag == 1)
			s++;
	}
	if (flag)
		return ('\0');
	else
		return (s);
}
