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
- [ ] ft_striter
- [ ] ft_striteri
- [ ] ft_strmap
- [ ] ft_strmapi
- [ ] ft_strequ
- [ ] ft_strnequ
- [ ] ft_strsub
- [ ] ft_strjoin
- [ ] ft_strtrim
- [ ] ft_strsplit
- [ ] ft_itoa
- [ ] ft_putchar
- [ ] ft_putstr
- [ ] ft_putendl
- [ ] ft_putnbr
- [ ] ft_putchar_fd
- [ ] ft_putstr_fd
- [ ] ft_putendl_fd
- [ ] ft_putnbr_fd

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
