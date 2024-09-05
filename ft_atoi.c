/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warisac <warisac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:05:50 by warisac           #+#    #+#             */
/*   Updated: 2024/09/05 15:20:31 by warisac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != 0 && str[i] >= '0' && str[i] <= '9' )
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

// int main()
// {
// 	int	result = ft_atoi("123abc");
// 	printf("The result is %d", result);
// 	return 0;
// }