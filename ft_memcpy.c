/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:42:58 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/25 10:47:40 by warcharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copy n bytes from src to dst.
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned char *) src;
	while (n > 0)
	{
		*(tmp_dst++) = *(tmp_src)++;
		n--;
	}
	return (dst);
}

// #include <string.h>
// int main(void)
// {
// 	char s[100] = "aaaaa";
// 	char sbis[100] = "aaaaa";
//
// 	strcpy(sbis, s);
// 	if (!strcmp(memcpy(s, "source", 3), ft_memcpy(sbis, "source", 3))
// 		&& !strcmp(memcpy(s, "2emesource", 8), 
//		ft_memcpy(sbis, "2emesource", 8)))
// 		printf("OK\n");
// 	else
// 		printf("Failed : expected '%s', got '%s'.\n", s, sbis);
// }