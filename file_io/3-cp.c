#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * check_close - Closes a file descriptor and handles potential errors.
 * @fd: The file descriptor to close.
 */
void check_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_content - Reads from a source file and writes to a destination file.
 * @fd_from: The source file descriptor.
 * @fd_to: The destination file descriptor.
 * @from_name: The name of the source file (for error messages).
 * @to_name: The name of the destination file (for error messages).
 */
void copy_content(int fd_from, int fd_to, char *from_name, char *to_name)
{
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	for (;;)
	{
		bytes_read = read(fd_from, buffer, 1024);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_name);
			check_close(fd_from);
			check_close(fd_to);
			exit(98);
		}
		if (bytes_read == 0)
			break;

		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_name);
			check_close(fd_from);
			check_close(fd_to);
			exit(99);
		}
	}
}

/**
 * main - Entry point for the file copy program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, otherwise exits with an error code.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, permissions);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		check_close(fd_from);
		exit(99);
	}

	copy_content(fd_from, fd_to, argv[1], argv[2]);

	check_close(fd_from);
	check_close(fd_to);

	return (0);
}
