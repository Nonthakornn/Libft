#include "libft.h"

int ft_isalnum(int c)
{
    if((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}

int main()
{
    int result = ft_isalnum(51);
    printf("The result is %d", result);
}