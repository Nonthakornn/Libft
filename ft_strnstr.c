#include "libft.h"
#include "ft_strlen.c"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
     size_t needle_len;
     
     needle_len = ft_strlen(needle);

     if (needle_len == 0)
          return (char *) haystack;
     if (len == 0)
          return NULL;

     while (len >= needle_len)
     {
          char *haystack_ptr;
          char *needle_ptr;
          
          haystack_ptr = (char *)haystack;
          needle_ptr = (char *)needle;

          while (*haystack_ptr == *needle_ptr)
          {
               haystack_ptr++;
               needle_ptr++;
               if (*needle_ptr == '\0')
                    return (char *) haystack;
          }
          haystack++;
          len--;
     }
     return NULL;
}


#include <stdio.h>

int main(void)
{
     printf("\nTest de ft_strnstr :\n");
	printf("ft_strnstr(\"bonjour\", \"ou\", 13) : our : %s\n", ft_strnstr("bonjour", "our", 13));
	printf("ft_strnstr(\"bonjour\", \"njo\", 4) : (null) : %s\n", ft_strnstr("bonjour", "jour", 4));
	printf("ft_strnstr(\"bonjour\", \"njo\", 5) : njour : %s\n", ft_strnstr("bonjour", "njo", 5));
}