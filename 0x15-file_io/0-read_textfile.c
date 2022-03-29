#include "main.h"

/**
 * read_textfile - main function
 * @filename: param1
 * @letters: param2
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr, op;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	op = open(filename, O_RDWR);

	if (op == -1)
	{
		free(temp);
		return (0);
	}

	rd = read(op, temp, letters);
	if (rd == -1)
	{
		free(temp);
		return (0);
	}

	wr = write(STDOUT_FILENO, temp, rd);
	if (wr == -1)
	{
		free(temp);
		return (0);
	}

	if (close(op) == -1)
		return (0);

	close(op);
	free(temp);
	return (wr);
}
