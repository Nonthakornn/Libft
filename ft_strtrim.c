#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;

    start = 0;
    end = ft_strlen(s1) - 1;

    if (!s1 || !set)
        return (NULL);

    while (s1[start] && ft_strchr(set, s1[start]) && start < ft_strlen(s1)/2)
        start++;
    while (s1[end] && ft_strchr(set, s1[end]) && start >= ft_strlen(s1)/2)
        end--;
    
    if (end < 0)
        return (ft_substr(s1, 0, 0));

    return (ft_substr(s1, start, end - start + 1));
}


// int main(void)
// {
//     printf("\nTest de ft_strtrim :\n");
// 	printf("'bonjour' : %s\n", ft_strtrim("bonjour", " "));
// 	printf("'bonjour' : '%s'\n", ft_strtrim(" bonjour ", " "));
// 	printf("'onjour' : '%s'\n", ft_strtrim(" bonjour ", " b"));
// 	printf("'bonjour' : '%s'\n", ft_strtrim(" bonjour", " "));
// 	printf("'bonjour' : '%s'\n", ft_strtrim("bonjour ", " "));
// 	printf("'onjou' : '%s'\n", ft_strtrim("bonjour ", "br "));
// 	printf("'' : '%s'\n", ft_strtrim("", " "));
// 	printf("'test' : '%s'\n", ft_strtrim("test", ""));
// 	printf("'te st' : '%s'\n", ft_strtrim(" te st ", " "));
// 	printf("'' : '%s'\n", ft_strtrim(" b  ", "b "));
// }