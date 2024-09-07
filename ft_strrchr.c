/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warisac <warisac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 04:06:03 by warisac           #+#    #+#             */
/*   Updated: 2024/09/08 04:09:01 by warisac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*ptr;
	char			cc;

	cc = (char) c;
	ptr = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			ptr = (char *) &s[i];
		i++;
	}
	if (s[i] == c)
		ptr = (char *) &s[i];
	return (ptr);
}
