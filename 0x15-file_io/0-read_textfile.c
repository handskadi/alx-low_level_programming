#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - n9raw text file on nktbox ldar x chi7aja file
 * @filename: A pointer l nafs fichier.
 * @letters: le mobre diyal les letre li momkin i9rahom lfnctuion
 * Return: 0 walla NULL ila function fchlat walla O/W bach tbolina 3kla bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *bfr;

	if (filename == NULL)
		return (0);

	bfr = malloc(sizeof(char) * letters);
	if (bfr == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, bfr, letters);
	w = write(STDOUT_FILENO, bfr, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(bfr);
		return (0);
	}

	free(bfr);
	close(o);

	return (w);
}
