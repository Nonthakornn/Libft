#include "libft.h"
#include <stdlib.h>
#include "ft_strlen.c"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *new_string;
    char *ptr;

    new_string = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    ptr = new_string;

    while (*s1)
        *ptr++ = *s1++;
    while (*s2)
        *ptr++ = *s2++;
    
    *ptr = '\0';

    return new_string;
}

int main(void)
{
    printf("\nTest de ft_strjoin :\n");
	printf("abcdef : %s\n",	ft_strjoin("abc", "def"));
	printf("abc : %s\n", ft_strjoin("", "abc"));
	printf("abc : %s\n", ft_strjoin("abc", ""));
	printf("'' : %s\n", ft_strjoin("", ""));
}