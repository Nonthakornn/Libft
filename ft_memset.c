/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-04 11:15:26 by nchencha          #+#    #+#             */
/*   Updated: 2024-09-04 11:15:26 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) b;
	while (len > 0)
	{
		*(tmp_ptr++) = (unsigned char) c;
		len --;
	}
	return (b);
}

// int main()
// {
//     char buffer[10];
//     ft_memset(buffer, 'A', sizeof(buffer) - 1);
//     buffer[sizeof(buffer) -1 ] = '\0'; 
//     printf("%s", buffer);

//     //Bad code : Buffer Mismanagement
//     // char buffer[10];
//     // ft_memset(buffer, 'A', sizeof(buffer));
//     // buffer[sizeof(buffer) - 1] = '\0'; 
//     // printf("%s", buffer);
// }