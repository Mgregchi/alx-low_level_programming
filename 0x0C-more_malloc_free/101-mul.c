#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * A program that multiplies two positive numbers
 * Usage: mul num1 num2
 * num1 and num2 will be passed in base 10
 * Print the result, followed by a new line
 * If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits.
 * If not, print Error, followed by a new line, and exit with a status of 98
 * You are allowed to use more than 5 functions in your file
 * You can use bc (man bc) to check your results.
 *
 * char *DEFAULT_ERROR_MSG = "Error";
 * int *DEFAULT_CODE = 98;
 */

/**
 * _error_handler - A function to handle error and exit
 * with exit code 98
 * @msg: Error msg
 * @code: Error code
 *
 */

void _error_handler()
{
    /**
     *if (msg[0] == '\0')
     *    msg = DEFAULT_ERROR_MSG;
     *if (code == NULL)
     *    code = DEFAULT_CODE;
     *printf("%s\n", msg);
     *exit(code);
     */
    printf("Error\n");
    exit(98);
}

/**
 *_isdigit - checks whether a  character is a digit or not
 *@c: tested character
 *Return: 1 if it is, 0 otherwise
 */

int _isdigit(int c)
{
    if ((c >= 48) && (c <= 57))
    {
        return (1);
    }

    return (0);
}

/**
 * main - Program entry point
 * @argc: Arguments count
 * @argv: Arguments values
 *
 */

void main(int argc, char *argv[])
{
    int num1, num2;

    if (argc > 3 || argc < 3)
    {
        _error_handler();
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    if (num1 && num2 == 0)
        _error_handler();

    printf("%d\n", (num1 * num2));
}
