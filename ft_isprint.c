/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <warcharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:42:32 by warcharo          #+#    #+#             */
/*   Updated: 2024/09/08 18:42:34 by warcharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <string.h>
// int main()
// {
//     char *printable = "!#$\%&'()*+,-./:;?@[\\]^_`{|}~ ";
//     int i = 0;
//     while (i < strlen(printable))
//     {
//         if(ft_isprint(printable[i]))
//             printf("%c", printable[i]);
//         i++;
//     }
// }