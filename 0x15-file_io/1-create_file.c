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
	int len = 0;
	int i = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (op == -1)
		return (-1);

	while (text_content[i])
	{
		i++;
		len++;
	}

	if (text_content != NULL)
		write(op, text_content, len);

	close(op);
	return (1);
}
