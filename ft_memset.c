/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:43:12 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/25 10:46:19 by warcharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fill len byte of string b with character c.
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) b;
	while (len > 0)
	{
		*(tmp_ptr++) = (unsigned char) c;
		len--;
	}
	return (b);
}

// #include <string.h>

// int main(void)
// {
// 	char s[100] = "aaaaa";
// 	char sbis[100] = "aaaaa";
// 	if (!strcmp(memset(s, 'z', 3), ft_memset(sbis, 'z', 3)))
// 		printf("OK\n");
// 	else
// 		printf("Failed : expected '%s', got '%s'.\n", s, sbis);
// }