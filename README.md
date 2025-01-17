# Libft - Custom C Library

Libft is a custom C library that contains useful functions for C programming. It includes my own versions of important standard C functions, as well as some extra features like `ft_printf` and `get_next_line`.

## What’s in Libft:

1. **Standard C Functions**  
   These are the basic functions you use every day in C programming. Some examples are:
   - Memory management functions like `memchr`, `memcmp`, `memcpy`
   - String functions like `strlen`, `strcpy`, `strdup`
   - Character functions like `isdigit`, `isalnum`, `tolower`

   These functions are essential for tasks like working with memory, characters, or handling strings. They help your programs run efficiently and manage data effectively.

2. **ft_printf**  
   `ft_printf` is a custom version of the standard `printf`. It helps you print output in different formats, like printing numbers, strings, or characters. This is useful for making your programs show information in a clear way. It supports different format specifiers, like `%d`, `%s`, `%c`, `%x`, and others.

3. **get_next_line**  
   `get_next_line` reads a file descriptor line by line. It was implemented with the bonus feature of handling file descriptors, allowing you to read data from any file or input stream one line at a time. This is useful when working with files or when you need to process data line by line. It makes reading large files easier and more efficient, especially when you don’t know how many lines the file has.
   

## Installation

To use this library, first clone the repository and compile the library:
```bash
git clone https://github.com/hetzwaard/libft.git
cd libft
make
```
## Usage
To use Libft in your project, include the header file and link libft.a:
```bash
#include "libft.h"
```
Compile your program with:
```bash
cc -Wall -Werror -Wextra program.c -L. -lft
```
