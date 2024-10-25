# Libft - Custom C Library

Libft is a project where I implemented my own version of essential C standard library functions, as part of the Codam (42 Amsterdam) Core curriculum. This project helped me understand memory management, string manipulation, and other foundational C concepts. The library includes functions to handle strings, memory, numbers, and more, which can be linked and used in other C projects.

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
This library implements several key functions, including:

* **ft_isalnum**: Checks if the character is alphanumeric.
* **ft_isprint**: Checks if the character is printable.
* **ft_isascii**: Checks if the character is an ASCII character.
* **ft_isalpha**: Checks if the character is alphabetic.
* **ft_isdigit**: Checks if the character is a digit.
* **ft_memset**: Fills a block of memory with a specified byte.
* **ft_bzero**: Sets a block of memory to zero.
* **ft_memcpy**: Copies memory area from one location to another.
* **ft_memmove**: Moves memory area from one location to another, handling overlapping regions.
* **ft_strlen**: Computes the length of a string.
* **ft_strlcpy**: Copies a string to a destination with a specified maximum length.
* **ft_strlcat**: Appends a string to a destination with a specified maximum length.
* **ft_toupper**: Converts a lowercase letter to uppercase.
* **ft_tolower**: Converts an uppercase letter to lowercase.
* **ft_strchr**: Locates the first occurrence of a character in a string.
* **ft_strrchr**: Locates the last occurrence of a character in a string.
* **ft_strncmp**: Compares two strings up to a specified number of characters.
* **ft_memchr**: Locates a byte in a block of memory.
* **ft_memcmp**: Compares two blocks of memory.
* **ft_strnstr**: Locates a substring in a string with a specified maximum length.
* **ft_atoi**: Converts a string to an integer.
* **ft_calloc**: Allocates memory for an array and initializes it to zero.
* **ft_strdup**: Duplicates a string.
* **ft_putchar_fd**: Outputs a character to a specified file descriptor.
* **ft_putstr_fd**: Outputs a string to a specified file descriptor.
* **ft_putendl_fd**: Outputs a string followed by a newline to a specified file descriptor.
* **ft_putnbr_fd**: Outputs an integer to a specified file descriptor.
* **ft_substr**: Extracts a substring from a string.
* **ft_strjoin**: Concatenates two strings.
* **ft_strmapi**: Applies a function to each character of a string, returning a new string.
* **ft_striteri**: Applies a function to each character of a string with its index.
* **ft_strtrim**: Removes specified characters from the beginning and end of a string.
* **ft_itoa**: Converts an integer to a string.
* **ft_split**: Splits a string into an array of words based on a specified delimiter.
