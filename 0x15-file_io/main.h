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

#include "_strncmp.c"
#include "_close.c"
#include "_read.c"
#include "elf_magic.c"
#include "elf_class.c"
#include "elf_data.c"
#include "elf_version.c"
#include "elf_osabi.c"
#include "elf_abivers.c"
#include "elf_type.c"
#include "elf_entry.c"

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
