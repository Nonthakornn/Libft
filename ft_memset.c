/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:15:26 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/11 17:05:46 by nchencha         ###   ########.fr       */
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

// #include <string.h>
// int main()
// {
// 	unsigned char arr[10];
// 	unsigned char arr2[10];
// 	int arr3[5];
// 	int arr4[5];

// 	//Set all 10 bytes of arr to 0xAA
// 	// ft_memset(arr, 0xAA, 10);
// 	ft_memset(arr, 65, 10);
// 	printf("ft_memset Function\n");
// 	//Print array that is verify
// 	for (int i = 0; i < 10; i++)
// 	{
// 		//printf("arr[%d] = 0x%X\n", i, arr[i]);
// 		printf("arr[%d] = %c\n", i, arr[i]);

// 	}
// 	memset(arr2, 0xAA, 10);
// 	printf("Example of memset function\n");
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("arr2[%d] = 0x%X\n", i ,arr2[i]);
// 	}

// 	printf("This is why you dont use memset on integer\n");
// 	ft_memset(arr3, 1, 5 * sizeof(int));
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("arr3[%d] = %d\n", i, arr3[i]);
// 	}
// 	printf("Way to set integer to the value that we want\n");
// 	for (int i = 0; i < 5; i++)
// 	{
// 		arr4[i] = 1;
// 	}
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("arr4[%d] = %d\n", i, arr4[i]);
// 	}
// 	return (0);
// }

/*
int arr[4]
In memory it looks like this (each box is 1 byte)
array[0]: [  ][  ][  ][  ]
array[1]: [  ][  ][  ][  ]
array[2]: [  ][  ][  ][  ]
array[3]: [  ][  ][  ][  ]

When you memset(array, 0, sizeof(array)):
array[0]: [00][00][00][00] = 0 in integer
array[1]: [00][00][00][00] = 0 in integer
array[2]: [00][00][00][00] = 0 in integer
array[3]: [00][00][00][00] = 0 in integer

When you memset(array, -1, sizeof(array)):
array[0]: [FF][FF][FF][FF] = -1 in integer
array[1]: [FF][FF][FF][FF] = -1 in integer
array[2]: [FF][FF][FF][FF] = -1 in integer
array[3]: [FF][FF][FF][FF] = -1 in integer

But if you memset(array, 1, sizeof(array)):
array[0]: [01][01][01][01] = 16843009 in integer (not 1!)
array[1]: [01][01][01][01] = 16843009 in integer
array[2]: [01][01][01][01] = 16843009 in integer
array[3]: [01][01][01][01] = 16843009 in integer
This is why memset is mainly used for setting memory to 0 or -1, because those are 
the only values that make sense when setting byte by byte
*/
