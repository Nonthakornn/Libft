#include "libft.h"

int ft_isalpha(int c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);

    return (0);
}

// int main(void) {
//     int result;
//     result = ft_isalpha('4');
//     printf("Result: %d", result);
//     return 0;
// }