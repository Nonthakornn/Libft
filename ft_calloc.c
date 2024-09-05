/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warisac <warisac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:20:47 by warisac           #+#    #+#             */
/*   Updated: 2024/09/05 15:24:45 by warisac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*array;
	size_t			i;

	i = 0;
	array = malloc(nitems * size);
	while (i < nitems * size)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}

// int main(void)
// {
//  printf("\nTest (simple compilation/free) de ft_calloc;\n");
// 	char *ptr;
// 	ptr = ft_calloc(5, sizeof(int));
// 	free(ptr);
// }