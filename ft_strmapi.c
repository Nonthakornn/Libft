/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warisac <warisac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 02:12:45 by warisac           #+#    #+#             */
/*   Updated: 2024/09/08 02:24:19 by warisac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;

	new_str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}

// char	ft_test(unsigned int i, char c)
// {
// 	i = 0;
// 	return (c - 32);
// }

// int main(void)
// {
// 	printf("\nTest de ft_strmapi :\n");
// 	printf("ABC : %s\n", ft_strmapi("abc", ft_test));
// }