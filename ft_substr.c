/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:26:22 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/07 19:39:20 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	if (!s)
		return (NULL);
	while (s[start] && len > 0)
	{
		substr[i] = s[start];
		len--;
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

// int	main()
// {
// 	printf("%s\n", ft_substr("0123456", 3, 10));
// }