# 0x10. C - Variadic functions

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
* What are variadic functions
* How to use va_start, va_arg and va_end macros
* Why and how to use the const type qualifier

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
* You are allowed to use the following macros: va_start, va_arg and va_end
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called [variadic_functions.h](./variadic_functions.h)
* Don’t forget to push your header file
* All your header files should be include guarded


[0-sum_them_all.c](./0-sum_them_all.c)
```
Write a function that returns the sum of all its parameters.
```
* Prototype: int sum_them_all(const unsigned int n, ...);
* If n == 0, return 0

[1-print_numbers.c](./1-print_numbers.c)
```
Write a function that prints numbers, followed by a new line.
```
* Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
* where separator is the string to be printed between numbers
* and n is the number of integers passed to the function
* You are allowed to use printf
* If separator is NULL, don’t print it
* Print a new line at the end of your function


[2-print_strings.c](./2-print_strings.c)
```
Write a function that prints strings, followed by a new line.
```
* Prototype: void print_strings(const char *separator, const unsigned int n, ...);
* where separator is the string to be printed between the strings
* and n is the number of strings passed to the function
* You are allowed to use printf
* If separator is NULL, don’t print it
* If one of the string is NULL, print (nil) instead
* Print a new line at the end of your function


[3-print_all.c](./3-print_all.c)
```
Write a function that prints anything.
```
* Prototype: void print_all(const char * const format, ...);
* where format is a list of types of arguments passed to the function
	* c: char [printc.c](./printc.c)
	* i: integer [printi.c](./printi.c)
	* f: float [print_f.c](./print_f.c)
	* s: char * (if the string is NULL, print (nil) instead [prints.c](./prints.c)
	* any other char should be ignored
	* see example
* You are not allowed to use for, goto, ternary operator, else, do ... while
* You can use a maximum of
	* 2 while loops
	* 2 if
* You can declare a maximum of 9 variables
* You are allowed to use printf
* Print a new line at the end of your function
