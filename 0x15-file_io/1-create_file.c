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

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC);

	if (op == -1)
		return (0);

	while (text_content)
		i++;


	if (text_content != NULL)
		write(op, strlen(text_content);

	close(op);
	return (1);
}
