*This project has been created as part of the 42 curriculum by adeestev.*

## Description

Libft is the first project in the 42 curriculum, requiring the creation of a custom C library named libft.a. This library contains a collection of general-purpose functions that serve as a foundational toolkit for future school assignments. The project requires reimplementing standard libc functions with an ft_ prefix, alongside developing additional utility functions for string manipulation. All code must strictly adhere to the 42 Norm.


## Library functions detailed

The library is categorized into two main sections:

**1. Libc functions:**
Reimplementations of standard C library functions, exhibiting the exact same behaviors as their original man page descriptions:

* **Character classification & conversion:** ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower.

* **String manipulation:** ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_strdup.

* **Memory manipulation:** ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc.

* **Numeric conversion:** ft_atoi.

**2. Additional functions:**
Custom utility functions that are either not included in standard libc or exist in a different form:

* **String formatting & arrays:** ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_strmapi, ft_striteri.

* **Numeric conversion:** ft_itoa.

* **File descriptor outputs:** ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd.


## Instructions

The repository includes a Makefile to compile the source files into the required output using cc with the flags -Wall -Wextra -Werror. The ar command is used to archive the library; libtool is forbidden.

* make or make all: Compiles the mandatory functions into libft.a at the root of the repository.

* make clean: Removes the generated object files.

* make fclean: Removes the object files and the compiled libft.a library.

* make re: Completely rebuilds the library.
