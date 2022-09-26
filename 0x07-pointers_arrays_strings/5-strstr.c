#include "main.h"

/**
 * _strstr - first occurence of the substring needle in string haystack
 * @haystack: main string to be examined
 * @needle: searched in haystack
 * Return: always 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declaring variables*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;

		/*Star WHILE*/
		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str2);
		haystack = str1 + 1;
	}
	return (0);
}
