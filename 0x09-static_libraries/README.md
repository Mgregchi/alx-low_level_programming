# 0x09. C - Static libraries

## Concepts
**For this project, we expect you to look at this concept:**
- [C static libraries](./C_static_libraries.pdf)
  
## Resources
- [What Is A “C” Library? What Is It Good For?](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [Creating A Static “C” Library Using “ar” and “ranlib”](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [Using A “C” Library In A Program](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [What is difference between Dynamic and Static library(Static and Dynamic linking) (stop at 4:44)](https://www.youtube.com/watch?v=eW5he5uFBNM)

### man or help:

- ar
- ranlib
- nm
  
### General Learning objectives

* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of ar, ranlib, nm
  
### Files and Descriptions:
- File: libmy.a - `static library libmy.a containing all the functions`
- File: main.h - `contain all the prototypes of the functions in th above file.`
- File: create_static_lib.sh - ` script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.`
  