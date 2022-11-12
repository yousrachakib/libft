# libft

Libft is an individual project at 42 that requieres us to re-create some standard C library functions for future projects, and have a deeper understanding of data structures and basic algorithms. At 1337(42) we are not allowed to use some standard libraries on our projects, so we have to keep growing this libary with our own functions as we go farther in the program.

The project is divided in two parts :
## I. Mandatory part : 
### Part 1 - Libc functions :
The term "libc" is commonly used as a shorthand for the "standard C library", a library of standard functions that can be used by all C programs.

**ctype.h** : This header file defines functions that are used to check or transform characters.
- [ft_isalpha](https://github.com/yousrachakib/libft/blob/main/ft_isalpha.c)
- [ft_isdigit](https://github.com/yousrachakib/libft/blob/main/ft_isdigit.c)
- [ft_isalnum](https://github.com/yousrachakib/libft/blob/main/ft_isalnum.c)
- [ft_isascii](https://github.com/yousrachakib/libft/blob/main/ft_isascii.c)
- [ft_isprint](https://github.com/yousrachakib/libft/blob/main/ft_isprint.c)
- [ft_tolower](https://github.com/yousrachakib/libft/blob/main/ft_tolower.c)
- [ft_toupper](https://github.com/yousrachakib/libft/blob/main/ft_toupper.c)

**string.h** : This header file is used to perform operations on the string
- String-processing Functions
  - [ft_strlen](https://github.com/yousrachakib/libft/blob/main/ft_strlen.c)
  - [ft_strchr](https://github.com/yousrachakib/libft/blob/main/ft_strchr.c)
  - [ft_strrchr](https://github.com/yousrachakib/libft/blob/main/ft_strrchr.c)
  - [ft_strnstr](https://github.com/yousrachakib/libft/blob/main/ft_strnstr.c)
  - [ft_strncmp](https://github.com/yousrachakib/libft/blob/main/ft_strncmp.c)
  - [ft_strlcpy](https://github.com/yousrachakib/libft/blob/main/ft_strlcpy.c)
  - [ft_strlcat](https://github.com/yousrachakib/libft/blob/main/ft_strlcat.c)
- Memory Functions : 
  - [ft_bzero](https://github.com/yousrachakib/libft/blob/main/ft_bzero.c)
  - [ft_memcmp](https://github.com/yousrachakib/libft/blob/main/ft_memcmp.c)
  - [ft_memchr](https://github.com/yousrachakib/libft/blob/main/ft_memchr.c)
  - [ft_memset](https://github.com/yousrachakib/libft/blob/main/ft_memset.c)
  - [ft_memcpy](https://github.com/yousrachakib/libft/blob/main/ft_memcpy.c)
  - [ft_memmove](https://github.com/yousrachakib/libft/blob/main/ft_memmove.c)
  
**stdlib.h** : This is the general purpose standard library header file. It includes functions for type conversion(atof,atoi,etc), memory allocation and deallocation(malloc,calloc,free,etc)
  - [ft_atoi](https://github.com/yousrachakib/libft/blob/main/ft_atoi.c)
  - [ft_calloc](https://github.com/yousrachakib/libft/blob/main/ft_calloc.c)
  - [ft_strdup](https://github.com/yousrachakib/libft/blob/main/ft_strdup.c)
  
  ### Part 2 - Additional functions :
- [ft_substr](https://github.com/yousrachakib/libft/blob/main/ft_substr.c)
- [ft_strjoin](https://github.com/yousrachakib/libft/blob/main/ft_strjoin.c)
- [ft_strtrim](https://github.com/yousrachakib/libft/blob/main/ft_strtrim.c)
- [ft_split](https://github.com/yousrachakib/libft/blob/main/ft_split.c)
- [ft_itoa](https://github.com/yousrachakib/libft/blob/main/ft_itoa.c)
- [ft_strmapi](https://github.com/yousrachakib/libft/blob/main/ft_strmapi.c)
- [ft_striteri](https://github.com/yousrachakib/libft/blob/main/ft_striteri.c)
- [ft_putchar_fd](https://github.com/yousrachakib/libft/blob/main/ft_putchar_fd.c)
- [ft_putstr_fd](https://github.com/yousrachakib/libft/blob/main/ft_putstr_fd.c)
- [ft_putendl_fd](https://github.com/yousrachakib/libft/blob/main/ft_putendl_fd.c)
- [ft_putnbr_fd](https://github.com/yousrachakib/libft/blob/main/ft_putnbr_fd.c)