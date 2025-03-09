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

- [ ] ft_memset
- [ ] ft_bzero
- [ ] ft_memcpy
- [ ] ft_memccpy
- [ ] ft_memmove
- [ ] ft_memchr
- [ ] ft_memcmp
- [ ] ft_strlen
- [ ] ft_strdup
- [ ] ft_strcpy
- [ ] ft_strncpy
- [ ] ft_strcat
- [ ] ft_strncat
- [ ] ft_strlcat
- [ ] ft_strchr
- [ ] ft_strrchr
- [ ] ft_strstr
- [ ] ft_strnstr
- [ ] ft_strcmp
- [ ] ft_strncmp
- [X] ft_atoi
- [X] ft_isalpha
- [X] ft_isdigit
- [ ] ft_isalnum
- [ ] ft_isascii
- [ ] ft_isprint
- [ ] ft_toupper
- [ ] ft_tolower

### Part 2: Additional Functions

- [ ] ft_memalloc
- [ ] ft_memdel
- [ ] ft_strnew
- [ ] ft_strdel
- [ ] ft_strclr
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
