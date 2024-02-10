#include "main.h"

/**
 * mt_line - checks if there exists an empty line.
 * @buff: A line to.
 * Return: for true 0, else 1, depends on: (int).
 */

int mt_line(char *buff)
{
	int i;

	for (i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] != ' ')
			return (0);
	}
	return (1);
}
