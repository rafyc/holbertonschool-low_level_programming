#include "main.h"

/**
 * create_file - main function
 * @filename: param1
 * @text_content: param2
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int i = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_TRUNC | O_APPEND);

	if (op == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[i])
	{
		i++;
	}

	if (text_content != NULL)
		write(op, text_content, i);

	close(op);
	return (1);
}
