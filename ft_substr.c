#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *new;
    size_t slen;
    size_t finish;

    if(!s)
        return (0);
    
    slen = ft_strlen(s);
    finish = 0;

    if (start < slen)
        finish = slen - start;

    if (finish > len)
        finish = len;
    
    new = (char *)malloc((finish +1) * sizeof(char));

    if (!new)
        return (0);

    ft_strlcpy(new, s + start, finish + 1);
    
    return (new);    
}

// int main()
// {
//     const char *s = "0123456789";
//     int start = 3;
//     int len = 5;

//     char *result = ft_substr(s, start, len);
//     printf("%s", result);
// }