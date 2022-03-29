#include "main.h"

/**
 * create_file - main function
 * @filename: param1
 * @text_content: param2
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int op;
	int i = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_TRUNC | O_CREAT | O_RDWR, 0600);

	if (op == -1)
		return (-1);

	while (text_content[i])
	{
		i++;
	}

	if (text_content != NULL)
		write(op, text_content, i);

	if (close(op) == -1)
		return (-1);

	close(op);
	return (1);
}
