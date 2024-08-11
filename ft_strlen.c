#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}


// int main()
// {
//     int result = ft_strlen("asdasdd");
//     printf("%d", result);
// }