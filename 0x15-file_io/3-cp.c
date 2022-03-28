#include "main.h"

/**
* main - fonction
* @argc: para
* @argv: para
* Return: int
*/

int main(int argc, char *argv[])
{
	int cpfrom, closecpfrom, cpto, closecpto, r, w;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	cpfrom = open(argv[1], O_RDONLY);
	if (cpfrom == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]), exit(98);
	}

	cpto = open(argv[2], O_TRUNC | O_WRONLY | O_CREAT, 0664);
	if (cpto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	while ((r = read(cpfrom, buff, 1024)) > 0)
	{
		w = write(cpto, buff, r);
		if (w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	closecpfrom = close(cpfrom);
	if (closecpfrom == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", cpfrom), exit(100);

	closecpto = close(cpto);
	if (closecpto == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", cpto), exit(100);
	return (0);
}
