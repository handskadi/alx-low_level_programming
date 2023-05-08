#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *c_b(char *file);
void c_f(int fd);

/**
 * c_b - nreserviw 1024 bytes l bfr.
 * @file: smiya diyal file f bfr
 *
 * Return: poilter diyal dakchi li resirvina l bffr
 */

char *c_b(char *file)
{
	char *bfr;

	bfr = malloc(sizeof(char) * 1024);

	if (bfr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bfr);
}

/**
 * c_f - fermer le fichier
 * @fd: fichier li khaso itferma
 */
void c_f(int fd)
{
	int chr;

	chr = close(fd);

	if (chr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - cpy l contenu diyal l fichier l autre
 * @argc: le nombre diyal les argument li it3taw f progrms
 * @argv: arry dyial les argmts l ponits
 *
 * Return: 0 c'est camarch.
 *
 * Description: si les agmts li m7soubin machi correct - exit code 97.
 *              si file_from makynch ga3 - exit code 98.
 *              si file_to mymknch ncreiwh wala nopeniwh - exit code 99.
 *              Isi file_to or file_from mymknch nsadouh - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *bfr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bfr = c_b(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, bfr, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bfr);
			exit(98);
		}

		w = write(to, bfr, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bfr);
			exit(99);
		}

		r = read(from, bfr, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(bfr);
	c_f(from);
	c_f(to);

	return (0);
}
