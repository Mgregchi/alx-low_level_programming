# 0x10. C - Variadic functions

### Resources

- [stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h)
- [Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
- [Const Keyword](https://www.youtube.com/watch?v=1W4oyuOdXv8)

### General Learning Objectives

- What are variadic functions
- How to use va_start, va_arg and va_end macros
- Why and how to use the const type qualifier

### General Requirements

* Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
* You are allowed to use the following macros: va_start, va_arg and va_end
* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl) 
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called variadic_functions.h
* Don’t forget to push your header file
* All your header files should be include guarded

| File                 | Description                                             |
| -------------------- | ------------------------------------------------------- |
| 0-sum_them_all.c     | a function that returns the sum of all its parameters.  |
| 1-print_numbers.c    | a function that prints numbers, followed by a new line. |
| 2-print_strings.c    | a function that prints strings, followed by a new line. |
| 3-print_all.c        | a function that prints anything.                        |
| variadic_functions.h | `Functions prototypes`                                  |
