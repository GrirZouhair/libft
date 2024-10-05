/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:24:23 by marvin            #+#    #+#             */
/*   Updated: 2024/09/17 10:24:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
ft_memcpy is a function that copies a specified number of bytes from a source memory area
to a destination memory area
*/
#include "libft.h"
// src is treated as read-only (const), while dst is modified to store the copied data.
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *destination;
    unsigned char *source;
    size_t i;

    i = 0;
    if (dst == NULL && src == NULL)
    {
        return (dst);
    }
    destination = (unsigned char *)dst;
    source = (unsigned char *)src;

    while (n > 0)
    {
        *(destination++) = *(source++);
        n--;
    }
    return (dst);
}
// #include <stdio.h>
// int main()
// {
//     char arr1[] = {1, 2, 3};  // Corrected array declaration
//     char arr2[3] = {9, 9, 9}; // Allocate space for the destination array

//     ft_memcpy(arr2, arr1, 3); // Correctly call ft_memcpy

//     for (int i = 0; i < 3; i++)
//     {
//         printf("arr2[%d] = %d\n", i, arr2[i]); // Corrected printf format
//     }

//     return 0;
// }