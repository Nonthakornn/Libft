#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substring;
    size_t i;

    substring = (char *) malloc((len + 1) * sizeof(char));
    i = 0;

    if (!s)
        return NULL;

    while (s[start] != '\0' && len > 0)
    {
        substring[i] = s[start];
        len--;
        i++;
        start++;
    }
    substring[i] = '\0';

    return substring;
}

// int main(void)
// {
//     printf("\nTest de ft_substr :\n");
// 	printf("njo : %s\n", ft_substr("bonjour", 2, 3));
// 	printf("njour : %s\n", ft_substr("bonjour", 2, 5));
// 	printf("njour : %s\n", ft_substr("bonjour", 2, 6));
// 	printf("r : %s\n", ft_substr("bonjour", 6, 1));
// 	printf("'' : %s\n",	ft_substr("bonjour", 6, 0));
// }