# 0x15. C - File I/O

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
* Look for the right source of information online
* How to create, open, close, read and write files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
* How to use the I/O system calls open, close, read and write
* What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
* What are file permissions, and how to set them when creating a file with the open system call
* What is a system call
* What is the difference between a function and a system call

## Copyright - Plagiarism
* You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
* You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
* You are not allowed to publish any content of this project.
* Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements
### General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
* Allowed syscalls: read, write, open, close
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file
* All your header files should be include guarded
* Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...

## Tasks
[0-read_textfile.c](./0-read_textfile.c)
```
Write a function that reads a text file and prints it to the POSIX standard output.
```
* Prototype: ssize_t read_textfile(const char *filename, size_t letters);
* where letters is the number of letters it should read and print
* returns the actual number of letters it could read and print
* if the file can not be opened or read, return 0
* if filename is NULL return 0
* if write fails or does not write the expected amount of bytes, return 0

[1-create_file.c](./1-create_file.c)
```
Create a function that creates a file.
```
* Prototype: int create_file(const char *filename, char *text_content);
* where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
* Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
* The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
* if the file already exists, truncate it
* if filename is NULL return -1
* if text_content is NULL create an empty file

[2-append_text_to_file.c](./2-append_text_to_file.c)
```
Write a function that appends text at the end of a file.
```
* Prototype: int append_text_to_file(const char *filename, char *text_content);
* where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file
* Return: 1 on success and -1 on failure
* Do not create the file if it does not exist
* If filename is NULL return -1
* If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file

[3-cp.c](./3-cp.c)
```
Write a program that copies the content of a file to another file.
```
* Usage: cp file_from file_to
* if the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error
* if file_to already exists, truncate it
* if file_from does not exist, or if you can not read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
	* where NAME_OF_THE_FILE is the first argument passed to your program
* if you can not create or if write to file_to fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
	* where NAME_OF_THE_FILE is the second argument passed to your program
* if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error
	* where FD_VALUE is the value of the file descriptor
* Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions
* You must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer
* You are allowed to use dprintf
