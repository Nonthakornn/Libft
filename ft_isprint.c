#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}
// #include <string.h>
// int main()
// {
//     char *printable = "!#$\%&'()*+,-./:;?@[\\]^_`{|}~ ";
//     int i = 0;
//     while (i < strlen(printable))
//     {
//         if(ft_isprint(printable[i]))
//             printf("%c", printable[i]);
//         i++;
//     }
// }