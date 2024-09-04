
#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <limits.h>
//Delete later just for testing
# include <stdio.h>
# include <stddef.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_atoi(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);


char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_substr(char const *s, unsigned int start, size_t len);

size_t  ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);

void *ft_memset(void *b, int c, size_t len);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void ft_bzero(void *s, size_t n);

#endif
