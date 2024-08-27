#include "libft.h"
// locate byte in byte string

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    size_t len;
    unsigned char uc;

    str = (unsigned char *) s;
    uc = (unsigned char) c;

    len = 0;
    while (len < n)
    {
        if (str[len] == uc)
            return ((void *) &str[len]);
        len++;
    }
    return NULL;
}