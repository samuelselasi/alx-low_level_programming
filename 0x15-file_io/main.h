#ifndef MAIN_H
#define MAIN_H

#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <elf.h>

#include "check_elf.c"
#include "print_magic.c"
#include "print_class.c"
#include "print_data.c"
#include "print_version.c"
#include "print_abi.c"
#include "print_osabi.c"
#include "print_type.c"
#include "print_entry.c"
#include "close_elf.c"

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
