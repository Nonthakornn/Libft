/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:21:22 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/25 15:31:20 by warcharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Count # of nodes
int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		count;

	ptr = lst;
	count = 0;
	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}

// int main()
// {
// 	t_list *list = ft_lstnew("a");;
// 	t_list *ptr;

// 	char *alphabet = "abcdefghijk";
// 	ptr = list;
// 	while (*alphabet)
// 	{
// 		ptr->next = ft_lstnew(alphabet);
// 		alphabet++;
// 		ptr = ptr->next;
// 	}

// 	int size = ft_lstsize(list);
// 	printf("Size of list: %i\n", size);
// 	return (0);
// }