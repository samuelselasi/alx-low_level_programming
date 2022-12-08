## 0x00. C - Hello, World

Introduction to programming and first set of assignments at Holberton School

**What you should learn from this project**

    At the end of this project you are expected to be able to explain to anyone, without the help of Google:

* Why C programming is awesome (don’t forget to tweet today, with the hashtag #cisfun :))
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type gcc main.c
* What is an entry point
* What is main
* How to print text using printf, puts and putchar
* How to get the size of a specific type using the unary operator sizeof
* How to compile using gcc
* What is the default program name when compiling with gcc
* What is the official C coding style and how to check your code with betty-style
* How to find the right header to include in your source code when using a standard library function
* How does the main function influence the return value of the program

### Tasks

[0-preprocessor](./0-preprocessor)
```
Write a script that runs a C file through the preprocessor
and save the result into another file.
```
* The C file name will be saved in the variable $CFILE
* The output should be saved in the file c

[1-compiler](./1-compiler)
```
Write a script that compiles a C file but does not link.
```
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension
  .o instead of .c.

[2-assembler](./2-assembler)
```
Write a script that generates the assembly code of a C code and save it in
an output file.
```
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the
  extension .s instead of .c.

[3-name](./3-name)
```
Write a script that compiles a C file and creates an executable named cisfun.
```
* The C file name will be saved in the variable $CFILE


[4-puts.c](./4-puts.c)
```
Write a C program that prints exactly
"Programming is like building a multilingual puzzle, followed by a new line.
```
* Use the function puts
* You are not allowed to use printf
* Your program should end with the value 0


