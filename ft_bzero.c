/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:51:45 by marvin            #+#    #+#             */
/*   Updated: 2024/09/15 12:51:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
==>In ft_memset, returning the pointer allows the caller to use the modified memory directly if needed
(for passing the pointer to another function).


==>In ft_bzero, since it only zeroes out the memory, there’s no additional utility in returning the pointer,
so it simply returns void.
*/

#include "libft.h"
#include <stdio.h>

void ft_bzero(void *b, size_t len)
{
    unsigned char *str;
    str = (unsigned char *)b;
    str[len] = 0;
    while (len > 0)
    {
        str[len - 1] = 0; // we affected digit that's why use %d
        len--;
    }
    str[len] = 0;
}

int main()
{
    char arr[5];

    // Fill the array with non-zero values for testing purposes
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 'A'; // Use 'A' to easily spot changes
    }

    // Call ft_bzero to zero out the entire array
    ft_bzero(arr, 5);

    // Print buffer contents after bzero
    printf("Buffer after ft_bzero:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", (unsigned char)arr[i]); // Print as integer to visualize zero
    }
    printf("\n");

    return 0;
}
