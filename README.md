# Libft

## Overview

Libft is a custom C library that reimplements standard libc functions and provides additional utility functions for memory manipulation, string handling, and linked lists. This library is designed to be reused in other projects.

## Compilation

To compile the library, run:

```sh
make
```

To clean object files:

```sh
make clean
```

To remove compiled files and the library:

```sh
make fclean
```

To recompile everything:

```sh
make re
```

To compile and run tests

```sh
make test
```

## Functions Checklist

### Part 1: Libc Functions

- [X] ft_memset
- [X] ft_bzero
- [X] ft_memcpy
- [X] ft_memccpy
- [X] ft_memmove
- [X] ft_memchr
- [X] ft_memcmp
- [X] ft_strlen
- [X] ft_strdup
- [X] ft_strcpy
- [X] ft_strncpy
- [X] ft_strcat
- [X] ft_strncat
- [ ] ft_strlcat
- [ ] ft_strchr
- [ ] ft_strrchr
- [ ] ft_strstr
- [ ] ft_strnstr
- [X] ft_strcmp
- [X] ft_strncmp
- [X] ft_atoi
- [X] ft_isalpha
- [X] ft_isdigit
- [X] ft_isalnum
- [X] ft_isascii
- [X] ft_isprint
- [X] ft_toupper
- [X] ft_tolower

### Part 2: Additional Functions

- [X] ft_memalloc
- [X] ft_memdel
- [X] ft_strnew
- [X] ft_strdel
- [X] ft_strclr
- [X] ft_striter
- [X] ft_striteri
- [X] ft_strmap
- [X] ft_strmapi
- [X] ft_strequ
- [X] ft_strnequ
- [X] ft_strsub
- [X] ft_strjoin
- [X] ft_strtrim
- [ ] ft_strsplit
- [X] ft_itoa
- [X] ft_putchar
- [X] ft_putstr
- [X] ft_putendl
- [X] ft_putnbr
- [X] ft_putchar_fd
- [X] ft_putstr_fd
- [X] ft_putendl_fd
- [X] ft_putnbr_fd

### Bonus: Linked List Functions

- [ ] ft_lstnew
- [ ] ft_lstdelone
- [ ] ft_lstdel
- [ ] ft_lstadd
- [ ] ft_lstiter
- [ ] ft_lstmap

## Usage

To use this library in your project:

1. Include the header file:

```c
#include "libft.h"
```

2. Link the compiled library:

```sh
gcc your_program.c -L. -lft -o your_program
```

## License

This project is part of the 42 school curriculum.
