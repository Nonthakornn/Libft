/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:18:45 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/25 15:29:28 by warcharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main(void)
// {
// 	t_list	*newlist = ft_lstnew("a");

// 	newlist->next = ft_lstnew("b");
// 	newlist->next->next = ft_lstnew("c");

// 	t_list	*current = newlist;
// 	while (current != NULL)
// 	{
// 		printf("%s\n", (char *) current->content);
// 		current = current->next;
// 	}
// 	return (0);
// }
