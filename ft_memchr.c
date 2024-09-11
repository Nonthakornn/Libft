/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:42:41 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/12 03:02:43 by warcharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Locate c in string s within n length.
void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	uc;
	size_t	len;

	str = (char *) s;
	uc = (char) c;
	len = 0;
	while (len < n)
	{
		if (str[len] == uc)
			return ((void *) &str[len]);
		len++;
	}
	return (NULL);
}

// #include <string.h>

// int main(void)
// {
// 	if (memchr("source", 'r', 2) == ft_memchr("source", 'r', 2) 
// 		&& !strcmp(memchr("source", 'r', 5), ft_memchr("source", 'r', 5)))
// 		printf("OK\n");
// 	else
// 		printf("Failed.\n");
// }