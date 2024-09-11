/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:43:03 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/12 03:28:38 by warcharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copy byte string. Strings may overlap.
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_src;
	char	*c_dst;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	c_src = (char *) src;
	c_dst = (char *) dst;
	i = 0;
	if (c_dst > c_src)
	{
		while (len-- > 0)
			c_dst[len] = c_src[len];
	}
	else
	{
		while (i < len)
		{
			c_dst[i] = c_src[i];
			i++;
		}
	}
	return (dst);
}

#include <string.h>

int main(void)
{
	char s1[] = "string test";
	char s2[] = "string test";
	if (!strcmp(memmove(s1, s1 + 3, 5), ft_memmove(s2, s2 + 3, 5)) && !strcmp(memmove(s1 + 3, s1, 5), ft_memmove(s2 + 3, s2, 5)))
		printf("OK\n");
	else
		printf("Failed (tests : ft_memmove(s, s + 3, 5) and ft_memmove(s + 3, s, 5)).\n");
}