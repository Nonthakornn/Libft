/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:41:57 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/12 02:40:59 by warcharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Write 0 to byte string. If n = 0, does nothing.
void	ft_bzero(void *s, size_t n)
{
	char	*tmp_ptr;

	tmp_ptr = (char *)s;
	while (n > 0)
	{
		*(tmp_ptr++) = 0;
		n--;
	}
}

// #include <strings.h>
// int main(void)
// {
// 	char str[] = "starfish";
// 	ft_bzero(str, 3);
// 	printf("ft_bzero: %s\n", str);

// 	char str1[] = "starfish";
// 	bzero(str1, 3);
// 	printf("bzero: %s\n", str1);
// 	return (0);
// }