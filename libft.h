
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

char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);

size_t ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);

void *ft_memset(void *b, int c, size_t len);

#endif
