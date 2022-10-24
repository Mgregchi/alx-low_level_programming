# 0x12. C - Singly linked lists



![**Structure of a C linked list**](C-Linked-List.png)


## Resources
**Read or watch:**

- [Linked Lists](https://youtu.be/udapt4FGY20)
- [Google](https://www.google.com/search?q=linked+lists)
- [Youtube](http://www.youtube.com/results?search_query=linked+lists)

### General Learning Objectives
- When and why using linked lists vs arrays
- How to build and use linked lists

## General Requirements

* Allowed editors: vi, vim, emacs

* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

* All your files should end with a new line

* A README.md file, at the root of the folder of the project is mandatory

* Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)

* You are not allowed to use global variables

* No more than 5 functions per file

* The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden

* You are allowed to use _putchar

* You don’t have to push [_putchar.c](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c), we will use our file. If you do it won’t be taken into account

* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h

* Don’t forget to push your header file

* All your header files should be include guarded

### Files and Description

| File             | Description                                           |
| ---------------- | ----------------------------------------------------- |
| 0-print_list.c   | Prints all the elements of a list_t list.             |
| 1-list_len.c     | Finds the number of elements in a linked list_t list. |
| 2-add_node.c     | Adds a new node at the beginning of a list_t list.    |
| 3-add_node_end.c | Adds a new node at the end of a list_t list.          |
| 4-free_list.c    | Frees a list_t list.                                  |
| 100-first.c      | Prints a string before the main function is executed. |
| lists.h          | Function prototypes                                   |
| README.md        | A README file for project info                        |