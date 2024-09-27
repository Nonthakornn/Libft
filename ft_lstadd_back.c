/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:18:16 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/27 13:28:25 by warcharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!lst || !new)
		return ;
	last_node = ft_lstlast(*lst);
	if (!last_node)
		*lst = new;
	else
		last_node->next = new;
}

// #include "ft_lstnew.c"
// int main(void)
// {
// 	t_list	*lst;

// 	lst = ft_lstnew("a");
// 	lst->next = ft_lstnew("b");
// 	lst->next->next = ft_lstnew("c");

// 	ft_lstadd_back(&lst, ft_lstnew("d"));

// 	t_list	*current = lst;
// 	while (current != NULL)
// 	{
// 		printf("%s\n", (char *) current->content);
// 		current = current->next;
// 	}
// 	return (0);
// }
