#include "main.h"

/**
 * char *_strcpy - Copy a string to a new space in memory
 * @dest: destination to copy to
 * @src: source string to copy
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *tmpdest = dest;


	while (*src != '\0' && *src == 'Z')
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (tmpdest);
}
