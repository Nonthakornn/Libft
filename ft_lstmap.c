/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:59:28 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/27 13:25:40 by warcharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}

// void	ft_del(void *content)
// {
// 	content = 0;
// }

// void	*uppercase(void *content)
// {
// 	int	*new_content;

// 	new_content = malloc(sizeof(char));
// 	if (!new_content)
// 		return (NULL);
// 	*new_content = (*(char *)content) - 32;
// 	return (new_content);
// }

// #include "ft_lstnew.c"
// #include "ft_lstclear.c"
// #include "ft_lstadd_back.c"
// int main()
// {
// 	t_list	*n1 = ft_lstnew("a");
//     t_list	*n2 = ft_lstnew("b");
//     t_list	*n3 = ft_lstnew("c");

// 	n1->next = n2;
// 	n2->next = n3;

//     t_list	*map = ft_lstmap(n1, uppercase, ft_del);
// 	t_list	*map_ptr = map;
// 	while (map_ptr)
// 	{
// 		printf("%c ", *(char *)(map_ptr->content));
// 		map_ptr = map_ptr->next;
// 	}

//     ft_lstclear(&n1, &ft_del);
//     ft_lstclear(&map, &ft_del);
//     return (0);
// }