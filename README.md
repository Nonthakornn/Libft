# 42_Cursus
This project is about coding C library

# Part 1
- `ft_isalpha` - Check if it is character or not including upper case and lower case.
- `ft_isdigit` - Check for number.
- `ft_isascii` - Check for ASCII.
- `ft_isalnum` - Check number or alphabet only (including Upper case and Lower case).
- `ft_isprint` - Check for printable character.
- `ft_toupper` - Convert to uppercase.
- `ft_tolower` - Convert to Lowercase.
- `ft_atoi` - Convert ASCII string to integer (Consider about white space, sign and number).
  - example - 123abc --> 123, abc132 --> 0, 1a2b3x --> 1
- `ft_strlen` - Count String length.
- `ft_strlcat` - Concatenate two string together.
---
- `ft_memset` - Function that we can use to set a whole block of memory to a particular value (useful function for efficiently initializing or resetting memory).
- `ft_bzero` - Writes n zeroed bytes to the string s
---

- `ft_strlcpy` - Copy string.
- `ft_memcpy` - Copy a block of data from one memory address to another memory address .
- `ft_memmove` - Does the same thing as [`ft_memcpy`] both string can overlab in memory and this fucntion does not overwrite the string when makeing the copy.
  - This means we can send any type of data we want to [`ft_memchr`] and it will work.
---
- `ft_strchr` - Locate the first character that seen and print out the rest.
- `ft_strrchr` - Locate the last character that seen and print the rest.
- `ft_memchr` - Work the same as [`ft_strchr`], the different is that memchr work with byte string (void *) where [`ft_strchr`] works with 'litteral' strings (char *).
---
- `ft_strncmp` - Compare string and returns an integer (positive, negative, zero).
- `ft_memcmp` - Compares byte strings. It works similarly to the [`ft_strncmp`] function.
---
- `ft_strnstr` -  Locate a substring in a string
- `ft_calloc` - Return a pointer to allocate memory. set all the memory bytes to 0.
- `ft_strdup` - Save a copy of string.

# Part 2
- `ft_substr` 
- `ft_strjoin`
- `ft_split`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`

---

Resource:
- https://42-cursus.gitbook.io/guide/rank-00/libft/
- https://github.com/48d31kh413k/1337-Libft-42/blob/main/libft.h
- https://github.com/piolows/libft/blob/main/README.md
- https://github.com/pasqualerossi/Libft/blob/libft/ft_strrchr.c
- https://www.asidesigned.com/project-libft.html
- https://github.com/portfoliocourses/c-example-code