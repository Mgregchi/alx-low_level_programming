#include "main.h"

/**
* read_textfile - prints to the POSIX
* @filename: pointer to the name of the file
* @letters: size to be printed
* Return: number of letters, 0 in other case
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *st;
	int op, rd, wr;

	if (filename == NULL)
		return (0);

	st = malloc(letters);
	op = open(filename, O_RDONLY);

	if (op == -1)
	{
		free(st);
		return (0);
	}
	rd = read(op, st, letters);
	if (rd == -1)
	{
		free(st);
		return (0);
	}
	wr = write(STDOUT_FILENO, st, rd);

	if (wr == -1)
	{
		free(st);
		close(op);
		return (0);
	}
	free(st);
	close(op);
	return (wr);
}
