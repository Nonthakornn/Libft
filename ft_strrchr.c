/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:44:37 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/08 18:44:39 by warcharo         ###   ########.fr       */
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
