/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warisac <warisac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:29:25 by warisac           #+#    #+#             */
/*   Updated: 2024/09/08 01:42:24 by warisac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	length(int n);
static char	*allocate_mem(int len);
static char	*int_min(void);

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		len;
	int		i;

	nbr = n;
	len = length(n);
	str = allocate_mem(len);
	if (str == NULL)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	i = len - 1;
	while (nbr != 0)
	{
		str[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	str[len] = 0;
	return (str);
}

static char	*allocate_mem(int len) //Allocate memory.
{
	char	*str;

	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '0';
	return (str);
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