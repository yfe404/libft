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
