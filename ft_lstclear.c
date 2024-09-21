#include "libft.h"
#include "ft_lstdelone.c"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *ptr;

    while (*lst)
    {
        ptr = *lst;
        *lst = (*lst)->next;
        ft_lstdelone(*lst, del);
    }
    *lst = NULL;
}

int main()
{
    t_list *list = ft_lstnew("a");
    t_list *ptr;

    char *alphabet = "bcdefghijk";
    ptr = list;
    while (*alphabet)
    {
        ptr->next = ft_lstnew(alphabet);
        alphabet++;
        ptr = ptr->next;
    }

    t_list *tmp = list->next;
    ft_lstclear(&list, ft_del);
    printf("List after clear:\n");

    if (!list)
        printf("Clear list successfully\n");
    else
    {
        printf("%s ", tmp->content);
    }

    return (0);
}