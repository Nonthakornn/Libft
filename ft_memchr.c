/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:42:41 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/08 18:42:43 by warcharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locate byte in byte string
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			len;
	unsigned char	uc;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	len = 0;
	while (len < n)
	{
		if (str[len] == uc)
			return ((void *) &str[len]);
		len++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Test de ft_memchr : \n");
	if (memchr("source", 'r', 2) == ft_memchr("source", 'r', 2) 
		&& !strcmp(memchr("source", 'r', 5), ft_memchr("source", 'r', 5)))
		printf("OK\n");
	else
		printf("Failed.\n");
}
*/