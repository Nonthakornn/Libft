/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:19:41 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/27 13:28:10 by warcharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	while (*lst)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
	free(*lst);
	*lst = NULL;
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
//     ft_lstclear(&list, ft_del);
//     printf("List after clear:\n");

//     if (!list)
//         printf("Clear list successfully\n");
//     else
//     {
//         printf("%s ", tmp->content);
//     }

//     return (0);
// }