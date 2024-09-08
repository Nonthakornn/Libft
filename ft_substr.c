/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:44:47 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/08 18:45:02 by warcharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	substring = (char *) malloc((len + 1) * sizeof(char));
	i = 0;
	if (!s)
		return (NULL);
	while (s[start] != '\0' && len > 0)
	{
		substring[i] = s[start];
		len--;
		i++;
		start++;
	}
	substring[i] = '\0';
	return (substring);
}
