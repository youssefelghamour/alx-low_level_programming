#include "main.h"
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
* print_error - Prints an error message to stderr and exits with code 98
* @message: The error message to print
*/
void print_error(char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}

/**
* print_entry_point - Prints the entry point address from the ELF header
* @header: Pointer to the ELF header
*/
void print_entry_point(Elf64_Ehdr *header)
{
	printf("	Entry point address:	%#lx\n", (unsigned long)header->e_entry);
}

/**
* print_type - Prints the type information from the ELF header
* @header: Pointer to the ELF header
*/
void print_type(Elf64_Ehdr *header)
{
	printf("	Type:	%d\n", header->e_type);
}

/**
* print_osabi - Prints the OS/ABI and ABI Version from the ELF header
* @header: Pointer to the ELF header
*/
void print_osabi(Elf64_Ehdr *header)
{
	printf("	OS/ABI:	%d\n", header->e_ident[EI_OSABI]);
	printf("	ABI Version:	%d\n", header->e_ident[EI_ABIVERSION]);
}

/**
* print_version - Prints the ELF version from the ELF header
* @header: Pointer to the ELF header
*/
void print_version(Elf64_Ehdr *header)
{
	printf("	Version:	%d (current)\n", header->e_ident[EI_VERSION]);
}

/**
* print_data - Prints the data encoding information from the ELF header
* @header: Pointer to the ELF header
*/
void print_data(Elf64_Ehdr *header)
{
	printf("	Data:	%s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ?
			"2's complement, little endian" : "2's complement, big endian");
}

/**
* print_magic - Prints the magic number from the ELF header
* @header: Pointer to the ELF header
*/
void print_magic(Elf64_Ehdr *header)
{
	printf("	Magic:	");
	for (int i = 0; i < EI_NIDENT; ++i)
	{
		printf(" %02x", header->e_ident[i]);
	}
	printf("\n");
}

/**
* check_sys - Checks the system architecture and prints information from the
* ELF header
* @header: Pointer to the ELF header
*/
void check_sys(Elf64_Ehdr *header)
{
	char sys = header->e_ident[EI_CLASS] + '0';

	if (sys == '0')
		exit(98);

	printf("ELF Header:\n");
	print_magic(header);

	printf("	Class:	ELF%s\n", (sys == '1') ? "32" : "64");

	print_data(header);
	print_version(header);
	print_osabi(header);
	print_type(header);
	print_entry_point(header);
}

/**
* check_elf - Checks if the given file is a valid ELF file
* @header: Pointer to the ELF header
* Return: 1 if it is an ELF file, 0 otherwise
*/
int check_elf(Elf64_Ehdr *header)
{
	return (header->e_ident[EI_MAG0] == ELFMAG0
			&& header->e_ident[EI_MAG1] == ELFMAG1
			&& header->e_ident[EI_MAG2] == ELFMAG2
			&& header->e_ident[EI_MAG3] == ELFMAG3);
}

/**
* main - Entry point of the program. Reads ELF header and prints information
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	int fd = open(argv[1], O_RDONLY);

	if (fd == -1)
		print_error("Error: Couldn't open file");

	Elf64_Ehdr elf_header;

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		print_error("Error: Couldn't read ELF header");

	if (!check_elf(&elf_header))
		print_error("Error: Not an ELF file");

	check_sys(&elf_header);
	close(fd);

	return (0);
}
