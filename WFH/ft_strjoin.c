#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    char *res;
    int i;
    int j;

    i = 0;
    j = 0;
    
    if (!s1 || !s2)
        return (NULL);

    res = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char)); //(6 + 5 + 1)

    if (!res)
        return (NULL);
    
    while (s1[i])
    {
        res[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        res[i] = s2[j];
        i++;
        j++;
    }
    res[i] = '\0';
    return (res);       
}

// int main()
// {
//     const char *s1 = "Hello ";
//     const char *s2 = "World";
//     char *result = ft_strjoin(s1,s2);
//     printf("%s", result);
// }