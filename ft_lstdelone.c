#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
        return ;
    del(lst->content);
    free(lst);
}

void ft_del(void *content)
{
    content = 0;
}

// int main()
// {
//     t_list *list = ft_lstnew("a");
//     t_list *ptr;

//     char *alphabet = "bcdefghijk";
//     ptr = list;
//     while (*alphabet)
//     {
//         ptr->next = ft_lstnew(alphabet);
//         alphabet++;
//         ptr = ptr->next;
//     }

//     t_list *tmp = list->next;
//     ft_lstdelone(list, ft_del);
//     printf("List after delete:\n");

//     printf("%s ", tmp->content);

//     return (0);
// }