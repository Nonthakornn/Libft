/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:59:28 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/22 23:41:27 by warcharo         ###   ########.fr       */
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
// 	free(content);
// }

// void	*plus_10(void *content)
// {
// 	int	*newcontent;

// 	newcontent = malloc(sizeof(int));
// 	*newcontent = (*(int*)content) + 10;
// 	return (newcontent);
// }

// #include "ft_lstnew.c"
// #include "ft_lstclear.c"
// #include "ft_lstadd_back.c"
// int main()
// {
//     int i1 = 1, i2 = 2, i3 = 3;
// 	t_list	*one = ft_lstnew(&i1);
//     t_list	*two = ft_lstnew(&i2);
//     t_list	*three = ft_lstnew(&i3);

//     one->next = two;
//     two->next = three;
//     three->next = NULL;

//     t_list		*map;
// 	map = ft_lstmap(one, &plus_10, &ft_del);
// 	while (map)
// 	{
// 		// if (one->content)
// 			printf("%i ", *(int*)(map->content));
// 		map = map->next;
// 	}

//     ft_lstclear(&one, &ft_del);
//     ft_lstclear(&map, &ft_del);
//     return (0);
// }