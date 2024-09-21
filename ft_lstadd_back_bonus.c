/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:00:03 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/21 12:14:04 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Add new node at the end of the list
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->next = NULL;
}
