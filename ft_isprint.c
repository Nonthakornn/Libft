#include "libc.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}

// int main()
// {
//     int result = ft_isprint('a');
//     printf("The result is %d", result);
// }