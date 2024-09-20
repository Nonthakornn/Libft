/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:38:20 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/19 21:52:21 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*
int main()
{
    t_list *newlist = ft_lstnew("a");

    newlist->next = ft_lstnew("b");
    newlist->next->next = ft_lstnew("c");

    t_list *current = newlist;
    while (current != NULL)
    {
        printf("%s -> ", (char *) current->content);
        current = current->next;
    }
    printf("\n");
    return (0);
}
*/
