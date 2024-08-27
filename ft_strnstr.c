#include "libft.h"

char *ft_strnstr(const char *str, const char *sub, size_t len)
{
     char *str_ptr;
     char *sub_ptr;
     size_t sub_len;
     
     str_ptr = (char *) str;
     sub_ptr = (char *) sub;
     sub_len = 0; // length of substring
     while (*sub != '\0')
     {
          sub_len++;
          sub++;
     }

     // No substring to search, return string.
     if (sub_len == 0)
          return (char *) str;
     // len is 0, return null.
     if (len == 0)
          return NULL;

     
     while (len >= sub_len)
     {
          char *temp_str;
          char *temp_sub;

          temp_str = str_ptr;
          temp_sub = sub_ptr;

          while (*temp_str == *temp_sub)
          {
               temp_str++;
               temp_sub++;
               if (*temp_sub == '\0')
                    return str_ptr;
          }
          str_ptr++;
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