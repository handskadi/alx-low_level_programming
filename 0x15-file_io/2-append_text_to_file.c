#include "main.h"

/**
 * append_text_to_file - nappandiw text l fichier
 * @filename: pointer le nom de fichier
 * @text_content: string li ghadi appendiw l fichier
 *
 * Return: c'est ca march - -1.
 *         c'est le fichier n exist pas - -1.
 *         si autre- 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opt, wrt, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	opt = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opt, text_content, length);

	if (opt == -1 || wrt == -1)
		return (-1);

	close(opt);

	return (1);
}
