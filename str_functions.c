#include "monty.h"

/**
 * _strcmp - Function that compares two strings.
 * @s1: Type str compared
 * @s2: Type str compared
 * Return: 0 if s1 and s2 are equals.
 *         Another value if they are different
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0; s1[j] == s2[j] && s1[j]; j++)
		;
	if (s1[j] > s2[j])
		return (1);
	if (s1[j] < s2[j])
		return (-1);
	return (0);
}

/**
 * _sch - Search if a char is inside a string.
 * @s: String to review
 * @c: Char to find
 * Return: 1 if success, 0 if not
 */
int _sch(char *s, char c)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			break;
		}
		j++;
	}
	if (s[j] == c)
		return (1);
	else
		return (0);
}

/**
 * _strtoky - Function that cuts a string into tokens depending on the delimiter.
 * @s: String to cut in parts
 * @d: Delimiters
 * Return: First partition
 */
char *_strtoky(char *s, char *d)
{
	static char *ultimo;
	int i = 0, j = 0;

	if (!s)
		s = ultimo;
	while (s[i] != '\0')
	{
		if (_sch(d, s[i]) == 0 && s[i + 1] == '\0')
		{
			ultimo = s + i + 1;
			*ultimo = '\0';
			s = s + j;
			return (s);
		}
		else if (_sch(d, s[i]) == 0 && _sch(d, s[i + 1]) == 0)
			i++;
		else if (_sch(d, s[i]) == 0 && _sch(d, s[i + 1]) == 1)
		{
			ultimo = s + i + 1;
			*ultimo = '\0';
			ultimo++;
			s = s + j;
			return (s);
		}
		else if (_sch(d, s[i]) == 1)
		{
			j++;
			i++;
		}
	}
	return (NULL);
}

