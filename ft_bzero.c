#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    char *tmp_ptr;

    tmp_ptr = (char *) s;
    while (n > 0)
    {
        *(tmp_ptr++) = 0;
        n--;
    }
}