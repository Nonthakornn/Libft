#include "libc.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *tmp_dst;
    unsigned char *tmp_src;

    if (dst == (void *)0 && src == (void *)0)
        return (dst);

    tmp_dst = (unsigned char *) dst;
    tmp_src = (unsigned char *) src;

    while (n > 0)
    {
        *(tmp_dst++) = *(tmp_src)++;
        n--;
    }
    return (dst);
}

// int main(void)
// {
//     char  src[] = "abcde";
//     char dst[20];

//     ft_memcpy(dst, src, sizeof(char) * 3);

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dst);
//     printf("Size of Destination: %lu\n", sizeof(dst));
//     return 0;

// }