#include "libft.h"


char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
     size_t i;

     if (ft_strlen(needle) == 0)
          return (char *) haystack;
     if (len == 0)
          return NULL;

     i = 0;
     while (haystack[i] != '\0' && i < len)
     {
          size_t j;
          j = 0;
          while (haystack[i + j] == needle[j] && i+j < len)
          {
               j++;
               if (needle[j] == '\0')
                    return (char *) haystack + i;
          }
          j = 0;
          i++;
     }

     return NULL;
}


#include <stdio.h>

int main(void)
{
     printf("\nTest de ft_strnstr :\n");
	printf("ft_strnstr(\"bonjour\", \"ou\", 13) : our : %s\n", ft_strnstr("bonjour", "ou", 13));
	printf("ft_strnstr(\"bonjour\", \"njo\", 4) : (null) : %s\n", ft_strnstr("bonjour", "jour", 4));
	printf("ft_strnstr(\"bonjour\", \"njo\", 5) : njour : %s\n", ft_strnstr("bonjour", "njo", 5));
     printf("ft_strnstr(\"bonjour\", \"njo\", 5) : (null) : %s\n", ft_strnstr("bonjour", "on", 0));
     printf("ft_strnstr(\"bonjour\", \"njo\", 5) : bonjour : %s\n", ft_strnstr("bonjour", "", 5));
}
