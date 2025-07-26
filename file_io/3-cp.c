/*
 * File: 3-cp.c
 * Auth: Your Name
 * Desc: Copies the content of a file to another file.
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

void exit_error(int code, const char *format, const char *arg);

/**
 * exit_error - Print error message to stderr and exit with code.
 * @code: Exit status code.
 * @format: Format string for dprintf.
 * @arg: Argument to format (filename or descriptor number).
 */
void exit_error(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * main - Entry point. Copies file_from to file_to.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, exits with code on error.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t rd_bytes, wr_bytes;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		exit_error(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		exit_error(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((rd_bytes = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		wr_bytes = write(fd_to, buffer, rd_bytes);
		if (wr_bytes != rd_bytes)
		{
			close(fd_from);
			close(fd_to);
			exit_error(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (rd_bytes == -1)
	{
		close(fd_from);
		close(fd_to);
		exit_error(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}

