#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *c1;
    unsigned char *c2;

    c1 = (unsigned char *) s1;
    c2 = (unsigned char *) s2;

    while (n > 0)
    {
        if ((*c1 != *c2))
            return (*c1 - *c2);
        n--;
        c1++;
        c2++;
    }
    return (0);
}

// #include <stdio.h>

// int main(void)
// {
//      printf("\nTest de ft_memcmp : \n");
// 	    printf("0 : %d\n", ft_memcmp("test", "test", 4));
// 	    printf("negative : %d\n", ft_memcmp("test", "test2", 5));
// 	    printf("0 : %d\n", ft_memcmp("test", "test2", 4));
// 	    printf("positive : %d\n", ft_memcmp("\200", "\0", 4));
// 	    printf("positive : %d\n", ft_memcmp("tesu", "test", 6));
// }