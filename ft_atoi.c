/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:41:42 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/12 02:20:01 by warcharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Convert ASCII string -> integer
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
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9' )
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

// #include <stdlib.h>
// int main()
// {
// 	int	result = ft_atoi("  -123abc");
// 	printf("ft_atoi: %d\n", result);
// 	int result2 = atoi("  -123abc");
// 	printf("atoi: %d\n", result);
// 	return 0;
// }