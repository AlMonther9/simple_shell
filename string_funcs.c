#include "main.h"

/**
 * _strcmp - A known standard function that compares two strings.
 * @p1: first pointer.
 * @p2: second pointer.
 * Return: result.
 */

int _strcmp(char *p1, char *p2)
{
	while (*p1 && *p2)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);

		p1++;
		p2++;
	}
	return (0);
}

/**
 * _strcpy - A known function that copies string pointed to by source (src).
 * @dest: pointer 2 destribute.
 * @src: pointer 2 source.
 * Return: @dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (c);
}

/**
 * _split - f 2 split string.
 * @str: string.
 * @sep: separator.
 * Return: divided path.
 */

char **_split(char *str, char *sep)
{
	char *aux, **split_str;
	int i = 0;

	aux = strtok(str, sep);
	split_str = (char **)_calloc(100, sizeof(char *));

	if (!split_str)
	{
		free(split_str);
		return (NULL);
	}

	while (aux)
	{
		split_str[i] = aux;
		aux = strtok(NULL, sep);
		i++;
	}
	return (split_str);
}

/**
 * _strcat - A function that concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * Return: @dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a += 1)
	{}

	for (b = 0; src[b] != '\0'; b += 1)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * _strlen - string length.
 * @strl: string.
 * Return: result.
 *
 */

int _strlen(char *strl)
{
	int i = 0;

	while (strl[i] != '\0')
		i++;

	return (i);
}
