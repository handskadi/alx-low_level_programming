#include "main.h"

/**
 * create_file - Creer fichier
 * @filename: A pointer l nom dyal fichier
 * @text_content: A pointer t string bach ncreeiw lfunctions
 *
 * Return: c'est camarch pas - -1. sinon - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int opt, wrt, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	opt = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opt, text_content, length);

	if (opt == -1 || wrt == -1)
		return (-1);

	close(opt);

	return (1);
}
