/*
 * File: 100-elf_header.c
 * Auth: Lavin Kituyi
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - Verify if file is an ELF file.
 * @e_ident: ELF magic numbers.
 * Description: Exits with code 98 if not an ELF file.
 */
void check_elf(unsigned char *e_ident) {
    // ... (rest of the function)
}

/**
 * print_magic - Display ELF header magic numbers.
 * @e_ident: ELF magic numbers.
 * Description: Numbers are space-separated.
 */
void print_magic(unsigned char *e_ident) {
    // ... (rest of the function)
}

/**
 * print_class - Display class of ELF header.
 * @e_ident: ELF class.
 */
void print_class(unsigned char *e_ident) {
    // ... (rest of the function)
}

/**
 * print_data - Display data of ELF header.
 * @e_ident: ELF class.
 */
void print_data(unsigned char *e_ident) {
    // ... (rest of the function)
}

/**
 * print_version - Display ELF header version.
 * @e_ident: ELF version.
 */
void print_version(unsigned char *e_ident) {
    // ... (rest of the function)
}

/**
 * print_osabi - Display OS/ABI of ELF header.
 * @e_ident: ELF version.
 */
void print_osabi(unsigned char *e_ident) {
    // ... (rest of the function)
}

/**
 * print_abi - Display ELF header ABI version.
 * @e_ident: ELF ABI version.
 */
void print_abi(unsigned char *e_ident) {
    // ... (rest of the function)
}

/**
 * print_type - Display type of ELF header.
 * @e_type: ELF type.
 * @e_ident: ELF class.
 */
void print_type(unsigned int e_type, unsigned char *e_ident) {
    // ... (rest of the function)
}

/**
 * print_entry - Display ELF header entry point.
 * @e_entry: ELF entry point address.
 * @e_ident: ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident) {
    // ... (rest of the function)
}

/**
 * close_elf - Close ELF file.
 * @elf: File descriptor of ELF file.
 * Description: Exits with code 98 if cannot close.
 */
void close_elf(int elf) {
    // ... (rest of the function)
}

/**
 * main - Display ELF header info.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, 98 on failure.
 * Description: Exits with code 98 on errors.
 */
int main(int __attribute__((__unused__)) argc, char *argv[]) {
    // ... (rest of the function)
}

