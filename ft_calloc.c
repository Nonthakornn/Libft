/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:26:40 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/10 23:10:59 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	if (count > 0 && SIZE_MAX / count < size)
		return (NULL);
	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, total);
	return (ptr);
}

// int main()
// {
// 	size_t count = 5;
// 	size_t size = sizeof(int);

// Allocate memory for array of 5 integers

// 	int *ft_arr = (int *)ft_calloc(count, size);
// 	int *std_arr = (int *)calloc(count, size);

// 	printf("Using ft_calloc:\n");
// 	for (size_t i = 0; i < count; i++)
// 	{
// 		printf("ft_arr[%zu] = %d\n", i, ft_arr[i]);
// 	}
// 	printf("\nUsing standard calloc:\n");
// 	for (size_t i = 0; i < count; i++)
// 	{
// 		printf("std_arr[%zu] = %d\n", i, std_arr[i]);
// 	}
// 	free(ft_arr);
// 	free(std_arr);
// }