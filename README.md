# Libft - Custom C Library

Libft is a custom C library that combines my own versions of essential C functions with extra features like `ft_printf`, `get_next_line`, and linked list functions.

I created this library as part of the Codam (42 Amsterdam) curriculum, which helped me learn about memory, strings, file reading, and other basic C programming concepts.

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
