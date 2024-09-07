/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warisac <warisac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 04:12:05 by warisac           #+#    #+#             */
/*   Updated: 2024/09/08 04:14:10 by warisac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
