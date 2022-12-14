# 0x0B. C - malloc, free

## Concepts

For this project, we expect you to look at this concept:**
- [Automatic and dynamic allocation, malloc and free](../0x0B-malloc_free/Concept_%20Automatic_and_dynamic_allocation_malloc_and_free_.pdf)

## Resources
- [0x0a - malloc & free - quick overview.pdf](../0x0B-malloc_free/0x0a%20-%20malloc%20%26%20free%20-%20quick%20overview.pdf)
- [Do I cast the result of malloc?](https://stackoverflow.com/questions/605845/do-i-cast-the-result-of-malloc)

**man or help:**
- exit (3)
- calloc
- realloc

### General Learning objectives
* How to use the exit function
* What are the functions calloc and realloc from the standard library and how to use them

### Requirements General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own - main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don’t forget to push your header file

### Files and Descriptions:
- File: 0-malloc_checked.c - `a function that allocates memory using malloc.`
- File: 1-string_nconcat.c - `a function that concatenates two strings.`
- File: 2-calloc.c - `a function that allocates memory for an array, using malloc.`
- File: 3-array_range.c - `function that creates an array of integers.`
- File: 100-realloc.c - `a function that reallocates a memory block using malloc and free`
- File: 101-mul.c - `a program that multiplies two positive numbers.`
- main.h: Function prototypes
