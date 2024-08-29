#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
    char *duplicate;
    int i;

    duplicate = (char *) malloc(ft_strlen(s) + 1);
    i = 0;

    while (s[i])
    {
        duplicate[i] = s[i];
        i++;
    }
    duplicate[i] = '\0';

    return (duplicate);
}

// int main(void)
// {
//     char *ptr;
//     printf("\nTest de ft_strdup :\n");
// 	ptr = ft_strdup("matcha latte");
// 	printf("'matcha latte' : %s\n", ptr);
// 	free(ptr);
// }
