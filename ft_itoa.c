/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:29:25 by warisac           #+#    #+#             */
/*   Updated: 2024/09/08 14:45:03 by warcharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int n);
static char	*int2char(char *str, int n);

static char	*int2char(char *str, int n)
{
	int	i;
	int	is_negative;

	i = length(n);
	str[i--] = '\0';
	is_negative = (n < 0);
	if (is_negative)
	{
		n = -n;
		str[0] = '-';
	}
	if (n == 0)
	{
		str[i] = '0';
	}
	while (n > 0)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	str = malloc(sizeof(char) * (length(n) + 1));
	if (!str)
		return (NULL);
	return (int2char(str, n));
}

static int	length(int n) //Calculate the length of n.
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

// int main(void)
// {
// 	printf("\nTest de ft_itoa :\n");
// 	printf("0 : %s\n", ft_itoa(0));
// 	printf("1 : %s\n", ft_itoa(1));
// 	printf("-1 : %s\n", ft_itoa(-1));
// 	printf("234 : %s\n", ft_itoa(234));
// 	printf("-5689 : %s\n", ft_itoa(-5689));
// 	printf("2147483647 : %s\n", ft_itoa(2147483647));
// }