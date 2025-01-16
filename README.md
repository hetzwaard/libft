# Libft - Custom C Library

Libft is a library where I implemented my own version of essential C standard library functions, as part of the Codam (42 Amsterdam) Core curriculum. This project helped me understand memory management, string manipulation, and other foundational C concepts. The library includes functions to handle strings, memory, numbers, and more, which can be linked and used in other C projects.

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
