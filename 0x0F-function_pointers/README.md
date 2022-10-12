# 0x0F. C - Function pointers

### Resources

- [Function Pointer in C](https://alx-intranet.hbtn.io/rltoken/yt8Q9jxzT_gyRAvnNkAgkw)
- [Pointers to functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
- [Function Pointers in C / C++](https://youtu.be/sxTFSDAZM8s)
- [why pointers to functions?](https://youtu.be/sxTFSDAZM8s)
- [Everything you need to know about pointers in C](https://boredzo.org/pointers/)

### General Learning Objectives

* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

### General Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called function_pointers.h
- Don’t forget to push your header file
- All your header files should be include guarded

| File   | Description                                                                                             |
| ------ | ------------------------------------------------------------------------------------------------------- |
| dog.h  | a function that prints a name. Prototype: void print_name(char *name, void (*f)(char *)); |
| function_pointers.h | `Functions prototypes`                                                                                  |
