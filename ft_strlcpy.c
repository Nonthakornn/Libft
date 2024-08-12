#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
    size_t i;
    i = 0;

    if (dstsize != 0)
    {
        while (src[i] != '\0' && i < (dstsize - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

    return (ft_strlen(src));
}

// int main()
// {
//     char dest[5];
//     const char *src = "Test"; //4
//     size_t copied = ft_strlcpy(dest, src, sizeof(dest));

//     printf("Copied string %s\n", dest);
//     printf("Length of source: %zu\n", copied);
// }