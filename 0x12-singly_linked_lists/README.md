# 0x12. C - Singly linked lists
![giphy-3](https://user-images.githubusercontent.com/85158665/214794846-26817fc7-40e9-4a3b-93d1-868dbadedcc1.gif)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
* When and why using linked lists vs arrays
* How to build and use linked lists

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
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called [lists.h](./lists.h)
* Don’t forget to push your header file
* All your header files should be include guarded

## Tasks

[0-print_list.c](./0-print_list.c)
```
Write a function that prints all the elements of a list_t list.
```
* Prototype: size_t print_list(const list_t *h);
* Return: the number of nodes
* Format: see example
* If str is NULL, print [0] (nil)
* You are allowed to use printf

[1-list_len.c](./1-list_len.c)
```
Write a function that returns the number of elements in a linked list_t list.
```
* Prototype: size_t list_len(const list_t *h);

[2-add_node.c](./2-add_node.c)
```
Write a function that adds a new node at the beginning of a list_t list.
```
* Prototype: list_t *add_node(list_t **head, const char *str);
* Return: the address of the new element, or NULL if it failed
* str needs to be duplicated
* You are allowed to use strdup

[3-add_node_end.c](./3-add_node_end.c)
```
Write a function that adds a new node at the end of a list_t list.
```
* Prototype: list_t *add_node_end(list_t **head, const char *str);
* Return: the address of the new element, or NULL if it failed
* str needs to be duplicated
* You are allowed to use strdup

[4-free_list.c](./4-free_list.c)
```
Write a function that frees a list_t list.
```
* Prototype: void free_list(list_t *head);


[100-first.c](./100-first.c)

![de3291ccf5b255fff6ce37bfde7a13f481e7ed0c](https://user-images.githubusercontent.com/85158665/214846812-1b60e4c4-67c8-4557-a1a5-39c91bcc50ba.jpg)

```
Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
```
* You are allowed to use the printf function

[101-hello_holberton.asm](./101-hello_holberton.asm)
```
Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
```
* You are only allowed to use the printf function
* You are not allowed to use interrupts
* Your program will be compiled using nasm and gcc:
