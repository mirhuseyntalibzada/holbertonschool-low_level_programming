#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void close_fd(int fd);

/**
 * close_fd - Closes a file descriptor and handles potential errors.
 * @fd: The file descriptor to be closed.
 *
 * Description: If closing the file descriptor fails, it prints an error
 * message to the standard error and exits with code 100.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of one file to another.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: The program exits with a specific code on failure:
 * 97: Incorrect argument count.
 * 98: Cannot read from the source file.
 * 99: Cannot write to the destination file.
 * 100: Cannot close a file descriptor.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read;
	char buffer[1024];

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
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_fd(fd_from);
		exit(99);
	}
	while (1)
	{
		bytes_read = read(fd_from, buffer, 1024);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close_fd(fd_from);
			close_fd(fd_to);
			exit(98);
		}
		if (bytes_read == 0) /* End of file */
			break;

		if (write(fd_to, buffer, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_fd(fd_from);
			close_fd(fd_to);
			exit(99);
		}
	}
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
