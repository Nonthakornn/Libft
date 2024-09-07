/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warisac <warisac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 04:09:16 by warisac           #+#    #+#             */
/*   Updated: 2024/09/08 04:11:52 by warisac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]) && start < ft_strlen(s1) / 2)
		start++;
	while (s1[end] && ft_strchr(set, s1[end]) && start >= ft_strlen(s1) / 2)
		end--;
	if (end < 0)
		return (ft_substr(s1, 0, 0));
	return (ft_substr(s1, start, end - start + 1));
}
