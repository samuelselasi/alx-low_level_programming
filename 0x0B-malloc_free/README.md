# 0x0B. C - malloc, free

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
* What is the difference between automatic and dynamic allocation
* What is malloc and free and how to use them
* Why and when use malloc
* How to use valgrind to check for memory leak

## Copyright - Plagiarism
* You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
* You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
* You are not allowed to publish any content of this project.
* Any form of plagiarism is strictly forbidden and will result in removal from the program.

##Requirements

### General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are malloc and free. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file

## More Info
* You do not have to learn about calloc and realloc.

## Tasks
[0-create_array.c](./0-create_array.c)
```
Write a function that creates an array of chars, and initializes it with a specific char.
```
* Prototype: char *create_array(unsigned int size, char c);
* Returns NULL if size = 0
* Returns a pointer to the array, or NULL if it fails

[1-strdup.c](./1-strdup.c)
```
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
```
* Prototype: char *_strdup(char *str);
* The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
* Returns NULL if str = NULL
* On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.

[2-str_concat.c](./2-str_concat.c)
```
Write a function that concatenates two strings.
```
* Prototype: char *str_concat(char *s1, char *s2);
* The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
* if NULL is passed, treat it as an empty string
* The function should return NULL on failure

[3-alloc_grid.c](./3-alloc_grid.c)
```
Write a function that returns a pointer to a 2 dimensional array of integers.
```
* Prototype: int **alloc_grid(int width, int height);
* Each element of the grid should be initialized to 0
* The function should return NULL on failure
* If width or height is 0 or negative, return NULL

[4-free_grid.c](./4-free_grid.c)
```
Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
```
* Prototype: void free_grid(int **grid, int height);
* Note that we will compile with your alloc_grid.c file. Make sure it compiles.

[100-argstostr.c](./100-argstostr.c)
```
Write a function that concatenates all the arguments of your program.
```
* Prototype: char *argstostr(int ac, char **av);
* Returns NULL if ac == 0 or av == NULL
* Returns a pointer to a new string, or NULL if it fails
* Each argument should be followed by a \n in the new string

[101-strtow.c](./101-strtow.c)
```
Write a function that splits a string into words.
```
* Prototype: char **strtow(char *str);
* The function returns a pointer to an array of strings (words)
* Each element of this array should contain a single word, null-terminated
* The last element of the returned array should be NULL
* Words are separated by spaces
* Returns NULL if str == NULL or str == ""
* If your function fails, it should return NULL
