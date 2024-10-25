# Libft - Custom C Library

Libft is a project where I implemented my own version of essential C standard library functions, as part of the Codam curriculum. This project helped me understand memory management, string manipulation, and other foundational C concepts. The library includes functions to handle strings, memory, numbers, and more, which can be linked and used in other C projects.

## Installation
To use this library, first clone the repository and compile the library:
```bash
git clone https://github.com/yourusername/libft.git
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
## Features
Some key functions implemented include:

* ft_split: Splits a string into an array of words based on a specified delimiter.
* ft_itoa: Converts an integer to a string.
* ft_strjoin: Concatenates two strings.
* ft_memset: Fills a block of memory with a specified byte.
* ft_bzero: Sets a block of memory to zero.

## Learning Outcomes
Working on Libft helped me gain deeper insights into memory allocation, pointer manipulation, and adhering to Norminette formatting.
