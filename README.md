# C Programming Language

**This Repository is for ALX software engineering course - C Programming.**

It contains **C** source codes as a solution to ALX Projects and Tasks I am tasked to complete.

## General requirements inlcudes :
- Allowed editors: vi, vim, emacs.
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
- All your files should end with a new line.
- A README.md file, at the root of the folder of the project is mandatory.
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
- You are not allowed to use global variables.
- No more than 5 functions per file.
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h.
- Don’t forget to push your header file.
- You are allowed to use the standard library (for some tasks, it is forbidden).

> **The above requirements may be task specific**

### Directories and Files
```bash
.
├── 0x00-hello_world
│   ├── 0-preprocessor
│   ├── 100-intel
│   ├── 101-quote.c
│   ├── 1-compiler
│   ├── 2-assembler
│   ├── 3-name
│   ├── 4-puts.c
│   ├── 5-printf.c
│   ├── 6-size.c
│   └── README.md
├── 0x01-variables_if_else_while
│   ├── 0-positive_or_negative.c
│   ├── 100-print_comb3.c
│   ├── 101-print_comb4.c
│   ├── 102-print_comb5.c
│   ├── 10-print_comb2.c
│   ├── 1-last_digit.c
│   ├── 2-print_alphabet.c
│   ├── 3-print_alphabets.c
│   ├── 4-print_alphabt.c
│   ├── 5-print_numbers.c
│   ├── 6-print_numberz.c
│   ├── 7-print_tebahpla.c
│   ├── 8-print_base16.c
│   ├── 9-print_comb.c
│   └── README.md
├── 0x02-functions_nested_loops
│   ├── 0-coding.c
│   ├── 100-times_table.c
│   ├── 104-fibonacci.c
│   ├── 10-add.c
│   ├── 11-print_to_98.c
│   ├── 1-alphabet.c
│   ├── 2-print_alphabet_x10.c
│   ├── 3-islower.c
│   ├── 4-isalpha.c
│   ├── 5-sign.c
│   ├── 6-abs.c
│   ├── 7-print_last_digit.c
│   ├── 8-24_hours.c
│   ├── 9-times_table.c
│   ├── coding.h
│   └── README.md
├── 0x03-more_functions_nested_loops
│   ├── 0-isupper.c
│   ├── 101-print_number.c
│   ├── 10-print_triangle.c
│   ├── 1-isdigit.c
│   ├── 2-mul.c
│   ├── 3-print_numbers.c
│   ├── 4-print_most_numbers.c
│   ├── 5-more_numbers.c
│   ├── 6-print_line.c
│   ├── 7-print_diagonal.c
│   ├── 8-print_square.c
│   ├── 9-fizz_buzz.c
│   ├── coding.h
│   └── README.md
├── 0x04-pointers_arrays_strings
│   ├── 0-reset_to_98.c
│   ├── 100-atoi.c
│   ├── 1-swap.c
│   ├── 2-strlen.c
│   ├── 3-puts.c
│   ├── 4-print_rev.c
│   ├── 5-rev_string.c
│   ├── 6-puts2.c
│   ├── 7-print_chessboard.c
│   ├── 8-print_diagsums.c
│   ├── 9-set_string.c
│   ├── coding.h
│   └── README.md
├── 0x07-recursion
│   ├── 0-puts_recursion.c
│   ├── 100-wildcmp.c
│   ├── 1-print_rev_recursion.c
│   ├── 2-strlen_recursion.c
│   ├── 3-factorial.c
│   ├── 4-pow_recursion.c
│   ├── 5-sqrt_recursion.c
│   ├── 6-is_prime_number.c
│   ├── 7-is_palindrome.c
│   ├── coding.h
│   └── README.md
├── 0x08-static_libraries
│   ├── create_static_lib.sh
│   ├── coding.h
│   ├── libcoding.a
│   └── README.md
├── 0x09-argc_argv
│   ├── 0-whatsmyname.c
│   ├── 100-change.c
│   ├── 1-args.c
│   ├── 2-args.c
│   ├── 3-mul.c
│   ├── 4-add.c
│   ├── coding.h
│   └── README.md
├── 0x0A-malloc_free
│   ├── 0-create_array.c
│   ├── 1-strdup.c
│   ├── 2-str_concat.c
│   ├── 3-alloc_grid.c
│   ├── 4-free_grid.c
│   ├── 5-argstostr.c
│   ├── coding.h
│   ├── #README.md#
│   └── README.md
├── 0x0B-more_malloc_free
│   ├── 0-malloc_checked.c
│   ├── 100-realloc.c
│   ├── 101-mul.c
│   ├── 1-string_nconcat.c
│   ├── 2-calloc.c
│   ├── 3-array_range.c
│   ├── coding.h
│   └── README.md
├── 0x0C-preprocessor
│   ├── 0-object_like_macro.h
│   ├── 1-pi.h
│   ├── 2-main.c
│   ├── 3-function_like_macro.h
│   ├── 4-sum.h
│   ├── coding.h
│   └── README.md
├── 0x0D-structures_typedef
│   ├── 1-init_dog.c
│   ├── 2-print_dog.c
│   ├── 4-new_dog.c
│   ├── 5-free_dog.c
│   ├── dog.h
│   └── README.md
├── 0x0E-function_pointers
│   ├── 0-print_name.c
│   ├── 100-main_opcodes.c
│   ├── 1-array_iterator.c
│   ├── 2-int_index.c
│   ├── 3-calc.h
│   ├── 3-get_op_func.c
│   ├── 3-get_opop_func.c
│   ├── 3-op_functions.c
│   ├── function_pointers.h
│   └── README.md
├── 0x0F-variadic_functions
│   ├── 0-sum_them_all.c
│   ├── 1-print_numbers.c
│   ├── 2-print_strings.c
│   ├── 3-print_all.c
│   ├── README.md
│   └── variadic_functions.h
├── 0x11-singly_linked_lists
│   ├── 0-print_list.c
│   ├── 100-first.c
│   ├── 101-hello_coding.asm
│   ├── 1-list_len.c
│   ├── 2-add_node.c
│   ├── 3-add_node_end.c
│   ├── 4-free_list.c
│   ├── lists.h
│   └── README.md
├── 0x12-more_singly_linked_lists
│   ├── 0-print_listint.c
│   ├── 100-reverse_listint.c
│   ├── 10-delete_nodeint.c
│   ├── 1-listint_len.c
│   ├── 2-add_nodeint.c
│   ├── 3-add_nodeint_end.c
│   ├── 4-free_listint.c
│   ├── 5-free_listint2.c
│   ├── 6-pop_listint.c
│   ├── 7-get_nodeint.c
│   ├── 8-sum_listint.c
│   ├── 9-insert_nodeint.c
│   ├── lists.h
│   └── README.md
├── README.md
```
