#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * display_error - Display error message and exit with status code 98
 * @message: Error message to display
 */
void display_error(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}

/**
 * read_elf_header - Read and display information from the ELF header
 * @file_descriptor: File descriptor of the ELF file
 */
void read_elf_header(int file_descriptor)
{
	Elf64_Ehdr elf_header;
	ssize_t read_bytes;
	int i;

	read_bytes = read(file_descriptor, &elf_header, sizeof(Elf64_Ehdr));
	if (read_bytes == -1 || read_bytes != sizeof(Elf64_Ehdr)) 
	{
		display_error("Error: Unable to read ELF header");
	}
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1]
			!= ELFMAG1 ||
	elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3]
	!= ELFMAG3)
	{
		display_error("Error: Not an ELF file");
	}
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\nClass:                             %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:                              %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI:                            %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type:                              %d\n", elf_header.e_type);
	printf("Entry point address:                0x%lx\n", elf_header.e_entry);
}

int main(int argc, char *argv[])
{
	int file_descriptor;
    
	if (argc != 2) {
	display_error("Usage: elf_header elf_filename");
	}
	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1) {
	display_error("Error: Unable to open file");
	}
	read_elf_header(file_descriptor);
	if (close(file_descriptor) == -1) {
	display_error("Error: Unable to close file");
	}
	return (0);
}
