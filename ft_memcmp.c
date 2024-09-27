/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:42:53 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/25 10:47:53 by warcharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Compare byte string.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *) s1;
	c2 = (unsigned char *) s2;
	while (n > 0)
	{
		if ((*c1 != *c2))
			return (*c1 - *c2);
		n--;
		c1++;
		c2++;
	}
	return (0);
}

// #include <string.h>
// int main(void)
// {
// 	printf("0 : %d\n", ft_memcmp("test", "test", 4));
// 	printf("0 : %d\n", memcmp("test", "test", 4));

// 	printf("negative : %d\n", ft_memcmp("test", "test5", 5));
// 	printf("negative : %d\n", memcmp("test", "test5", 5));

// 	printf("0 : %d\n", ft_memcmp("test", "test2", 4));
// 	printf("0 : %d\n", memcmp("test", "test2", 4));

// 	printf("positive : %d\n", ft_memcmp("tesu", "test", 6));
// 	printf("positive : %d\n", memcmp("tesu", "test", 6));
// 	return (0);
// }