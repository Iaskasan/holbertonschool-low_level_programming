#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: The NULL terminated string to write to the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         O/w - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;

		write(fd, text_content, i);
	}

	close(fd);

	return (1);
}
