#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void c_elf(unsigned char *e_ident);
void p_magic(unsigned char *e_ident);
void p_class(unsigned char *e_ident);
void p_data(unsigned char *e_ident);
void p_version(unsigned char *e_ident);
void p_abi(unsigned char *e_ident);
void p_osabi(unsigned char *e_ident);
void p_type(unsigned int e_type, unsigned char *e_ident);
void p_entry(unsigned long int e_entry, unsigned char *e_ident);
void cl_elf(int elf);

/**
 * c_elf - nchofo wach ELF fichier walala
 * @e_ident: A pointe l wa7d array diyal ELF
 *
 * Description: si le fichier est ne pas an ELF - exit code 98.
 */
void c_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
		    e_ident[i] != 'E' &&
		    e_ident[i] != 'L' &&
		    e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * p_magic - Prints le number magic diyal ELF
 * @e_ident: Pointer l wa7d ELF array
 *
 * Description: Magic nmbr p separiyen b spaces
 */
void p_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * p_class - Printi l classs dyal ELf
 * @e_ident: ELF Class l'pointer l array dyalha
 */
void p_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * p_data - Printi data diyal had ELF header
 * @e_ident: l pointer l addre li fih had elf class
 */
void p_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * p_version - Printi la ver dyial elf header
 * @e_ident: A pointer l class array dyal elf
 */
void p_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * p_osabi - printi osabi diyal elf
 * @e_ident: version diyal elf lpointer diyalha
 */
void p_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * p_abi - Printi la ver diyal ABI f ELF
 * @e_ident: pointer l array fiha version dyal ABI
 */
void p_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * p_type - printi type dyal elf
 * @e_type: type d elf
 * @e_ident: A pointer l type dyal elf.
 */
void p_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * p_entry - Prints l entry dyail header
 * @e_entry: l address dyal entrypiont dyal elf
 * @e_ident: elf class l pointer diyalha
 */
void p_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * cl_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: si le fichier mabghach itsad - exit code 98.
 */
void cl_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - afficher les info f header dyial fichier
 * @argc: ch7al men argument msuppliy l program
 * @argv: array diyal les pointers l program.
 *
 * Return: 0 c'est ca march.
 *
 * Description: c'est ce n est pas ELF
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		cl_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		cl_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	c_elf(header->e_ident);
	printf("ELF Header:\n");
	p_magic(header->e_ident);
	p_class(header->e_ident);
	p_data(header->e_ident);
	p_version(header->e_ident);
	p_osabi(header->e_ident);
	p_abi(header->e_ident);
	p_type(header->e_type, header->e_ident);
	p_entry(header->e_entry, header->e_ident);

	free(header);
	cl_elf(o);
	return (0);
}
